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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for(auto &it:a) cin >> it;
    for(auto &it: b) cin >> it;


    ll maxb = 0;
	ll ans = 0;
    vector<ll> pre(n);
	pre[0] = a[0];
	for(int i=1; i<n; i++){
		pre[i] = pre[i-1]+a[i];
	}

	ll m = k;
	for(int i=0; i<(n<k? n: k); i++){
		maxb = max(maxb, b[i]);
		m--;
		ans = max(ans, pre[i]+(m*maxb));
	}
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
