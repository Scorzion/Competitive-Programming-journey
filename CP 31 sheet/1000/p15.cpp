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
#include <climits>
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
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

   	vector<ll> pre(n+1,0);

   	pre[0] = (ll) s[0];
   	for(int i=1; i<n; i++){
   		pre[i] = pre[i-1] + (ll) s[i];
   	}

   	ll ans = 0;
   	ll val = LLONG_MAX;
   	for(int i=k-1; i<n; i++){
   		ll x = pre[i] - (i!=k-1? pre[i-k]:0) - k*'B';
   		if(x<val){
   			val = x;
   			ans = val/('W'-'B');
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
