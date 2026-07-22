#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll,ll>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(all(v));

    ll ans = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i].first*v[j].first>=2*n)
                break;
        
            if(v[i].first*v[j].first == v[i].second + v[j].second)
                ans++;
        }
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