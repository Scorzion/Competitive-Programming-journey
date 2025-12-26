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

    vector<ll> v(n);
    for(auto &it:v) cin >> it;

    vector<ll> pre(n);
	pre[0] = v[0];
	for(int i=1; i<n; i++){
		pre[i] = pre[i-1] + v[i];
	}

	sort(v.begin(),v.end());
	vector<ll> spre(n);
	spre[0] = v[0];
	for(ll i=1; i<n; i++){
		spre[i] = spre[i-1] + v[i];
	}

	int q;
	cin >> q;

	while(q--){
		int t, l, r;
		cin >> t>>  l >> r;

		if(t==1) cout << pre[r-1] - (l-2>=0? pre[l-2]:0) << endl;
		else cout << spre[r-1] - (l-2>=0? spre[l-2]:0) << endl;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
