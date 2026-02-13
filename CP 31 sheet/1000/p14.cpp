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

    vector<ll> s(n);
    for(auto &it:s) cin >> it;

    vector<ll> ans;
	ll pre = s[0];
	ll sz = 1;
	for(int i=1; i<n; i++){
		if(s[i]!=s[i-1]){
			if(sz==1){
				cout << -1 << endl;
				return;
			}
			ans.pb(sz);
			sz = 1;
		}
		else{
			sz++;
		}
	}

	if(sz==1){
		cout << -1 << endl;
		return;
	}
	else{
		ans.pb(sz);
	}


	for(int i=1; i<ans.size(); i++){
		ans[i] += ans[i-1];
	}

	for(int i=0; i<ans.size(); i++){
		ll k = ans[i];
		cout << k << " ";
		if(i==0){
			ll start = 1;
			while(start<k){
				cout << start << " ";
				start++;
			}
		}
		else{
			ll start = ans[i-1]+1;
			while(start<k){
				cout << start << " ";
				start++;
			}
		}
	}
	cout << endl;
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
