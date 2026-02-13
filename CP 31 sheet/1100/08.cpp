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
#include <climits>
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

void solve(){
    int n, k, s, t;
    cin >> n >> k >> s >> t;
 
    vector<ll> x(n + 1), y(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
 
    ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
    ll mins = 1e17, mint = 1e17;
 
    for (int i = 1; i <= k; i++) {
        mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
        mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
    }
 
    ans = min(ans, mins + mint);
    cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
