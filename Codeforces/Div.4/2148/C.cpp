/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O(n) per testcase
    SC    - O(n)
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

typedef long long ll;

#define endl "\n"

void solve(){
    ll n, m;
    cin >> n >> m;

    vector<pair<ll,ll>> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }

    ll ans = 0;
    ll ti = 0;          
    ll curr_posn = 0;   

    for(ll i=0; i<n; i++){
        ll posn = a[i].second;
        ll dt = a[i].first - ti;

        if (posn == curr_posn){
            ans += (dt / 2) * 2;  
        }else{
            if (dt % 2 == 0) ans += dt - 1;
            else ans += dt;
        }

        ti = a[i].first;
        curr_posn = posn;
    }

    ll dt = m - ti;
    if (dt > 0) {
        if (curr_posn == 0) ans += dt;
        else ans += (dt / 2) * 2;
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
