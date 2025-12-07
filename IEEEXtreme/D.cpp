/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O(M sqrt(M)) amortized; passes M ≤ 3e5
    SC    - O(M)
    Logic - Count positive bitonic sequences by generating functions.
            Let g_t(x) = ∏_{i=1..t} (1 - x^i)^(-2).
            Number for sum N equals coeff of x^N in F(x) = Σ_{t≥1} x^t * g_t(x).
            We maintain coeffs of g_t up to degree M while increasing t:
                g_t = g_{t-1} * (1 - x^t)^(-2) = g_{t-1} * Σ_{k≥0} (k+1) x^{k t}.
            For small t, use residue-class DP with prefix sums in O(M).
            For large t, kernel is sparse (O(M/t) taps), so shift-add.
**/

#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"

static const int MOD = 1'000'000'007;

inline void addmod(int &a, int b){ int s = a + b; if(s >= MOD) s -= MOD; a = s; }
inline int norm(ll x){ x %= MOD; if(x < 0) x += MOD; return (int)x; }

void solve(){
    int M; 
    cin >> M;

    vector<int> g(M+1, 0), ng(M+1, 0);
    g[0] = 1;

    vector<int> ans(M+1, 0);

    int B = max(1, (int)sqrt((ld)M));

    for(int t = 1; t <= M; ++t){
        fill(ng.begin(), ng.end(), 0);

        if(t <= B){
            
            for(int r = 0; r < t; ++r){
                vector<int> idxs;
                for(int n = r; n <= M; n += t) idxs.pb(n);
                int Q = (int)idxs.size() - 1; // q ∈ [0..Q]

                vector<ll> H(Q+1, 0), J(Q+1, 0);
                for(int q = 0; q <= Q; ++q){
                    ll hq = g[idxs[q]];
                    H[q] = hq + (q ? H[q-1] : 0);
                    J[q] = hq * q + (q ? J[q-1] : 0);
                }
                for(int q = 0; q <= Q; ++q){
                    ll S = ( (ll)(q+1) * H[q] - J[q] ) % MOD;
                    if(S < 0) S += MOD;
                    ng[idxs[q]] = (ng[idxs[q]] + (int)S) % MOD;
                }
            }
        }else{
            for(int n = 0; n <= M; ++n) ng[n] = g[n]; // k = 0 term
            int kmax = M / t;
            for(int k = 1; k <= kmax; ++k){
                int coef = k + 1;
                int shift = k * t;
                for(int n = 0; n + shift <= M; ++n){
                    ng[n + shift] = (ng[n + shift] + (int)((1LL * coef * g[n]) % MOD)) % MOD;
                }
            }
        }

        for(int n = 0; n + t <= M; ++n){
            addmod(ans[n + t], ng[n]);
        }

        g.swap(ng);
    }

    for(int N = 1; N <= M; ++N){
        cout << ans[N] << (N == M ? '\n' : ' ');
    }
}

int main(){
    init_code();
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);



    solve();
    
    return 0;
}
