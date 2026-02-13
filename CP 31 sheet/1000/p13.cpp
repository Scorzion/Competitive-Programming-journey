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
    ll n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(auto &it:v) cin >> it;

    vector<pair<ll,ll>> segments(n);
	for(int i=0; i<n; i++){
		segments[i] = {v[i]-x,v[i]+x};
	}

	ll ans = 0;
	ll l = segments[0].first;
	ll r = segments[0].second;

	for(int i=1; i<n; i++){
		l = max(l,segments[i].first);
		r = min(r,segments[i].second);
		if(l>r){
			ans++;
			l = segments[i].first;
			r = segments[i].second;
		}
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
