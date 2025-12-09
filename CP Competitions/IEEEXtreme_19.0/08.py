#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using boost::multiprecision::cpp_int;

// Python's round(x): ties-to-even
static long long round_half_to_even(long double x) {
    long double n = floorl(x);
    long double frac = x - n;
    if (frac < 0.5L) return (long long)n;
    if (frac > 0.5L) return (long long)(n + 1.0L);
    // frac == 0.5
    long long ni = (long long)n;              // floor part as integer
    if ((ni & 1LL) == 0) return ni;           // even -> stay
    return ni + 1;                            // odd -> round up
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long S, N;
        cin >> S >> N;

        // Replicate Python initializations
        // v = [0, -19] but immediately overwritten into lists; only initial scalars matter:
        // f = na = ng = 0; a = r = -19
        long long f = 0;
        long double na = 0.0L, ng = 0.0L;
        long double a = -19.0L;
        cpp_int r = -19;

        // Two bit-vectors per loop
        vector<int> v0, v1;

        // while a < s*s:
        long double SS = (long double)S * (long double)S;
        const cpp_int CONST = cpp_int("9223372036854775821"); // large odd constant

        while (a < SS) {
            na += 1.0L / 19.0L;
            long long f1 = f;

            // Build v[0] and v[1] as in Python
            for (int i2 = 0; i2 < 2; ++i2) {
                long long m = 19;                       // dummy entrance to the loop
                while (m) {                             // executes exactly once
                    m = N;
                    vector<int> &vec = (i2 == 0 ? v0 : v1);
                    vec.clear();
                    while (m > 0) {
                        int bit = (int)( (r & 1) != 0 ); // r & 1  -> 0/1
                        vec.push_back(bit);
                        // r = r >> 1 ^ bit * CONST
                        cpp_int shifted = r >> 1;       // arithmetic shift (sign-preserving)
                        if (bit) r = shifted ^ CONST;
                        else     r = shifted;
                        m -= 1 + bit;
                    }
                    // exit the while(m) because m <= 0 now
                }
            }

            // e = 19; e &= (v0[i] == v1[i]) across common length
            int e = 19;
            size_t L = min(v0.size(), v1.size());
            for (size_t i = 0; i < L; ++i) {
                e &= (v0[i] == v1[i]);
            }

            if (e) {
                ng += (long double)S;
                f = round_half_to_even(ng / na);
                a = (f == f1) ? (a + 1.0L / 1919.0L) : 0.0L;
            }
        }

        cout << f << '\n';
    }
    return 0;
}
