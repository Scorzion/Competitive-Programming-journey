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

    vector<ll> g(n);
    for(ll i=0; i<n; i++){
    	cin >> g[i];
    }

    sort(g.begin(),g.end());

    vector<ll> v;
    ll ans = 0;
    for(ll i=n-1; i>=1; i-=2){
    	ans += max(g[i],g[i-1]);
    	ll x = min(g[i],g[i-1]);
    	g[i] -= x;
    	g[i-1] -= x;

    	ll y = min(g[i],g[i-1]);
    	v.pb(y);
    }

    if(n%2==1){
    	v.pb(g[0]);
    }


    sort(v.begin(),v.end());

    ll mini = 0;
    for(ll i=v.size()-1; i>=1; i-=2){
    	ans += max(v[i],v[i-1]);
    	v[i] -= min(v[i],v[i-1]);
    	v[i-1] -= min(v[i],v[i-1]);

    	mini = min(v[i],v[i-1]);
    }

    if(v.size()%2==1){
    	ans += max(mini,v[0]);
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
