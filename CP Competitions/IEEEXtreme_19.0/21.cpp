/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    const int maxb = 20;
    vector<vector<long long>> f(maxb + 1, vector<long long>(k + 1, 0));

    for (int b = 0; b <= maxb; ++b) {
        int t = (1 << b);
        vector<int> pos;
        pos.reserve(n);
        for (int r = 1; r <= n; ++r) {
            if (a[r] >= t) pos.push_back(r);
            int m = (int)pos.size();
            int upto = min(k, m);
            if (upto == 0) continue;
            for (int x = 1; x <= upto; ++x) {
                int j = pos[m - x];
                long long J = j;
                long long contrib = J * (r + 1LL) - (J * (J + 1)) / 2;
                f[b][x] += contrib;
            }
        }
    }

    vector<long long> s(k + 1, 0);
    for (int x = 1; x <= k; ++x) {
        long long ans = 0;
        for (int b = 0; b <= 19; ++b) {
            ans += 1LL * b * (f[b][x] - f[b + 1][x]);
        }
        s[x] = ans;
    }

    for (int x = 1; x <= k; ++x) {
        if (x > 1) cout << ' ';
        cout << s[x];
    }
    cout << endl;
    return 0;
}
