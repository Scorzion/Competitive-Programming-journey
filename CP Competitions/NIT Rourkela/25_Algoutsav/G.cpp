/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - 
    SC    - 
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

static const int MOD = 1000000007;

int add(int a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
    return a;
}

void solve(){
    int n, l, r;
    cin >> n >> l >> r;

    int m = r - l + 1;

    vector<vector<int>> dp_u(n + 1, vector<int>(m, 0));
    vector<vector<int>> dp_d(n + 1, vector<int>(m, 0));

    for (int x = l; x <= r; x++) {
        int idx = x - l;
        dp_u[2][idx] = (x - l) % MOD;     
        dp_d[2][idx] = (r - x) % MOD;  
    }

    for (int i = 2; i < n; i++) {
        vector<int> pref_u(m + 1, 0), pref_d(m + 1, 0);

        for (int j = 0; j < m; j++) {
            pref_u[j + 1] = add(pref_u[j], dp_u[i][j]);
            pref_d[j + 1] = add(pref_d[j], dp_d[i][j]);
        }

        for (int y = 0; y < m; y++) {
            dp_u[i + 1][y] = pref_d[y];

            dp_d[i + 1][y] = add(
                pref_u[m],
                MOD - pref_u[y + 1]
            );
        }
    }

    int ans = 0;
    for (int j = 0; j < m; j++) {
        ans = add(ans, dp_u[n][j]);
        ans = add(ans, dp_d[n][j]);
    }

    cout << ans << endl;
}

int main(){
    init_code();
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
