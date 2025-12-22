// This is for week 1, lecture 2, first question

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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    vector<ll> pre(n),prei(n);

	pre[0] = a[0];
	for(ll i=1; i<n; i++){
		pre[i] = a[i] + pre[i-1];
	}

	prei[0] = a[0];
	for(ll i=1; i<n; i++){
		prei[i] = (i+1)*a[i] + prei[i-1];
	}

	while(q--){
		ll l, r;
		cin >> l >> r;

		ll x = prei[r-1] - ((l-2>=0)? prei[l-2]:0);
		ll y = (l-1)*(pre[r-1] - ((l-2>=0)? pre[l-2]:0));

		cout << x-y << endl;

	}
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
