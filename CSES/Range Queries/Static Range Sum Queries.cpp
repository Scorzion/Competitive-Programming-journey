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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n),pre(n);
    for(auto &it:a){
    	cin >> it;
    }

    pre[0] = a[0];
    for(ll i=1; i<n; i++){
    	pre[i] = pre[i-1] + a[i];
    }

    while(q--){
    	ll a, b;
    	cin >> a >> b;

    	cout << pre[b-1] - ((a==1)? 0 : pre[a-2]) << endl;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
   
    return 0;
}
