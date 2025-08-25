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
#include <cinttypes>
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

    vector<pair<ll,ll>> a(n);
    ll k = n;
   	ll i = 0;
    while(k--){
    	int m;
    	cin >> m;

    	vector<ll> v(m);

    	ll maxi = INT_MIN;

	   	for(ll i=0; i<m; i++){
	    	cin >> v[i];
	    	maxi = max(maxi, v[i]);
	    }

	    a[i].first = maxi;
	    a[i].second = m;
    
    	i++;
    }



    sort(a.begin(),a.end());


    ll result = 0;
    ll x = 0;

    for(ll i=0; i<n-1; i++){
    	x = a[n-1].first - a[i].first;
    	x *= a[i].second;
    	result += x;
    }
    cout << result << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
   
    return 0;
}
