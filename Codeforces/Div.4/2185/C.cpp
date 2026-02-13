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
    cin >>n;

    vector<ll> a(n);
    for(auto &it:a) cin >>it;

    sort(a.begin(),a.end());

	ll ans = 1;
	ll cnt = 1;
	for(int i=1; i<n; i++){
		if(a[i]-a[i-1]==1){
			cnt++;
		}
		if(a[i]-a[i-1]>1){
			ans = max(ans,cnt);
			cnt=1;
		}
	}
	ans = max(ans,cnt);
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
