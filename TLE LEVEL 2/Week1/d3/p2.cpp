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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

	
	map<ll,ll> m;
	// m[0]=1;

	ll pre = 0;
	for(ll i=0; i<n; i++){
		pre += a[i];
		m[(pre%n+n)%n]++;
	}

	ll ans = 0;
	for(auto it:m){
		ans += (it.second*(it.second-1)/2);
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
