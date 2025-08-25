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
    for(ll i = 0; i<n; i++){
    	cin >> a[i];
    }

    vector<ll> b(n);
    for(ll i = 0; i<n; i++){
    	cin >> b[i];
    }

    ll ans = 0;
    for(int i=0; i<n; i++){
    	ans += min(a[i],b[i]);
    }
  

    while(q--){
    	char c;
    	cin >> c;

    	ll x, v;
    	cin >> x >> v;

    	ll y = min(a[x-1],b[x-1]);

    	if(c=='A'){
    		a[x-1]=v;
    	}
    	else{
    		b[x-1]=v;
    	}

        ans -= y;
        ans += min(a[x-1],b[x-1]);

    	cout << ans << endl;

    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

 
    solve();
  
    return 0;
}
