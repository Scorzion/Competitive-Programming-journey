#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"


void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    int idx = 0;
    for(auto &it:a){
        cin >> it;
        idx = max(idx,32-__builtin_clz(it));
    }

    vector<bitset<32>> v(n);
    for(int i=0; i<n; i++){
        v[i] = a[i];
    }

    vector<pair<ll,ll>> val(32);
    for(int j=31; j>=0; j--){
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(v[i][j]==1) cnt++;
        }

        val[j] = {(1LL<<j)*cnt,j};
    }

    sort(val.begin(), val.end(), [](auto &a, auto &b){
        if(a.first!=b.first) return a.first>b.first;   
        return a.second<b.second;                      
    });

    ll ans = 0;
    for(int i=0; i<k; i++){
        ans += (1LL<<val[i].second);
    }
    
    cout << ans << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}