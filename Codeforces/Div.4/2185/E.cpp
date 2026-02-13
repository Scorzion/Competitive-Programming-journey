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

vector<pair<ll,ll>> change(vector<pair<ll,ll>> &a, char k){
	ll t = 1;
	if(k=='L') t = -1;
	for(int i=0; i<a.size(); i++){
		a[i].first += t;
	}

	return a;
}

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;

    vector<pair<ll,ll>> a(n);
    for(auto &it:a){
    	cin >> it.first;
    	it.second = 1;
    } 

    map<ll,ll> b;
 
    for(int i=0; i<m; i++){
    	ll x;
    	cin >> x;
    	b[x]++;
    }

    string s;
    cin >> s;

    ll ans = n;
    for(int i=0; i<k; i++){
    	a = change(a,s[i]);
    	for(int j=0; j<n; j++){
    		if(a[j].second==1 && b[a[j].first]==1){
    			a[j].second=0;
    			ans--;
    		}
    	}
    	cout << ans << " ";
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
