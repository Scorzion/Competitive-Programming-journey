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

    vector<ll> a(n), pre(n);
    for(auto &it:a){
    	cin >> it;
    }

    pre[0] = a[0];
    for(ll i=1; i<n; i++){
    	pre[i] = pre[i-1] + a[i];
    }

    while(q--){
    	ll l, r, k;
    	cin >> l >> r >> k;

    	ll val = pre[n-1] - pre[r-1] + ((l==1)? 0 : pre[l-2]) + (r-l+1)*k;
    	(val%2==1)? cout << "YES" << endl : cout << "NO" << endl;
    }
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
