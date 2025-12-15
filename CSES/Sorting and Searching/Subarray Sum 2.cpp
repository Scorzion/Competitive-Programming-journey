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

   	vector<ll> pre(n);
   	pre[0] = a[0];

   	for(ll i=1; i<n; i++){
   		pre[i] = a[i] + pre[i-1];
   	}

   	ll ans = 0;
   	for(ll i=0; i<n; i++){
   		for(ll j=i; j<n; j++){
   			ll y = pre[j] - ((i>0)? pre[i-1]: 0);
   			if(x == y) ans++;
   		}
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
