#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

static const int V = 7;
static const int MASKN = 1<<V;

using Arr = array<cpp_int, MASKN>;

void fwt_xor(Arr &a) {
    for (int len = 1; len < MASKN; len <<= 1) {
        for (int i = 0; i < MASKN; i += (len<<1)) {
            for (int j = 0; j < len; ++j) {
                cpp_int u = a[i+j];
                cpp_int v = a[i+j+len];
                a[i+j]       = u + v;
                a[i+j+len]   = u - v;
            }
        }
    }
}

void ifwt_xor(Arr &a) {
    // inverse is the same butterflies, then divide by N
    for (int len = 1; len < MASKN; len <<= 1) {
        for (int i = 0; i < MASKN; i += (len<<1)) {
            for (int j = 0; j < len; ++j) {
                cpp_int u = a[i+j];
                cpp_int v = a[i+j+len];
                a[i+j]       = u + v;
                a[i+j+len]   = u - v;
            }
        }
    }
    // divide by 2^7 = 128
    for (int i = 0; i < MASKN; ++i) a[i] /= 128; // exact division
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;

    while (T--) {
        int M; cin >> M;
        long long cnt[V][V] = {};
        for (int i = 0; i < M; ++i) {
            int x, y; cin >> x >> y; --x; --y;
            if (x > y) swap(x, y);
            cnt[x][y]++;
        }

        // Pow2[k] = 2^k as big int (we’ll need up to max c)
        long long maxc = 0;
        for (int i = 0; i < V; ++i)
            for (int j = i+1; j < V; ++j)
                maxc = max(maxc, cnt[i][j]);
        vector<cpp_int> pow2(maxc+1);
        pow2[0] = 1;
        for (long long k = 1; k <= maxc; ++k) pow2[k] = pow2[k-1] << 1;

        // F[S]: all selections inside S by parity mask
        vector<Arr> F(1<<V);
        for (int S = 1; S < (1<<V); ++S) {
            Arr dp{}; 
            dp.fill(0);
            dp[0] = 1; // pick nothing initially
            for (int u = 0; u < V; ++u) if (S & (1<<u)) {
                for (int v = u+1; v < V; ++v) if (S & (1<<v)) {
                    long long c = cnt[u][v];
                    if (c == 0) continue; // choosing from this type does nothing
                    cpp_int E = pow2[c-1]; // even count choices
                    cpp_int O = pow2[c-1]; // odd count choices
                    Arr ndp{}; ndp.fill(0);
                    int m = (1<<u) ^ (1<<v);
                    for (int s = 0; s < MASKN; ++s) {
                        if (dp[s] == 0) continue;
                        ndp[s]       += dp[s] * E;
                        ndp[s ^ m]   += dp[s] * O;
                    }
                    dp = move(ndp);
                }
            }
            // dp only uses bits within S; store
            F[S] = dp;
        }

        // Transform FWT(F[S]) once
        vector<Arr> FH(1<<V);
        for (int S = 1; S < (1<<V); ++S) {
            FH[S] = F[S];
            fwt_xor(FH[S]);
        }

        // Connected DP in FWT domain: CH[S]
        vector<Arr> CH(1<<V);
        for (int S = 1; S < (1<<V); ++S) {
            CH[S] = FH[S]; // start from all graphs on S
            // pick a root r = least significant bit
            int r = __builtin_ctz(S);
            // subtract partitions A (proper, nonempty) with r in A
            for (int A = (S-1)&S; A; A = (A-1)&S) {
                if (!(A & (1<<r))) continue;
                if (A == S) continue;
                int B = S ^ A;
                for (int i = 0; i < MASKN; ++i) {
                    CH[S][i] -= CH[A][i] * FH[B][i];
                }
            }
        }

        // Inverse transform to get C[S] (connected) in normal domain
        // Then sum over masks with 0 or 2 odd vertices, S size >= 2.
        cpp_int answer = 0;
        for (int S = 1; S < (1<<V); ++S) {
            if (__builtin_popcount(S) < 2) continue; // exclude singletons (empty only)
            Arr C = CH[S];
            ifwt_xor(C);
            for (int m = 0; m < MASKN; ++m) {
                if ((m & ~S) != 0) continue; // mask must be subset of S
                int pc = __builtin_popcount((unsigned)m);
                if (pc == 0 || pc == 2) {
                    answer += C[m];
                }
            }
        }

        // Print exact big integer
        std::string out = answer.convert_to<string>();
        cout << out << '\n';
    }
    return 0;
}
