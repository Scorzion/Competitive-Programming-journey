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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(n);
    for(auto &it : a) cin >> it;
    for(auto &it : b) cin >> it;

    ll s = 0;
    for(ll it : b) s += it;

    ll pre = 0;
    ll c = LLONG_MIN;
    for(int i=0; i<n; i++){
        c = max(c, a[i] - pre);
        pre += b[i];
    }

    ll ans = 0;

    ll z = min(m, c);
    if(z > 0){
        ans += z * (c + s);
    }

    if(m > c){
        ll cnt = m - max(0LL, c);
        ll first = max(1LL, c + 1) + s;
        ll last  = m + s;
        ans += cnt * (first + last)/2;
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
