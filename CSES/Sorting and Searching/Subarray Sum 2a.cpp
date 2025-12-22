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

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    ll ans = 0;
	ll sum = 0;
	map<ll,ll> m;

	for(int i=0; i<n; i++){
		sum += a[i];
		ans += m[sum-x];

		if(sum==x) ans++;
		m[sum]++;
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
