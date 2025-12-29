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

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    vector<ll> c(n + 1);
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];
    for(int i=1; i<=n; i++) cin >> c[i];

    vector<ll> prea(n + 1, 0);
	vector<ll> preb(n + 1, 0);
	vector<ll> prec(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        prea[i] = prea[i - 1] + a[i];
        preb[i] = preb[i - 1] + b[i];
        prec[i] = prec[i - 1] + c[i];
    }

    ll tc = prec[n];

    ll bestx = prea[1] - preb[1];
    ll ans = LLONG_MIN;

    for(int y = 2; y <= n - 1; y++) {
        ll curr = bestx + (preb[y] - prec[y]) + tc;
        ans = max(ans, curr);

        bestx = max(bestx, prea[y] - preb[y]);
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
