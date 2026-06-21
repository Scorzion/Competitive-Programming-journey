#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    map<ll,ll> mp;

    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll ans = 0;

    ans += (mp.rbegin())->second;

    for(auto it = mp.begin(); next(it) != mp.end(); it++){
        auto nxt = next(it);

        if((nxt->second - it->second < 0) && (nxt->first == (it->first +1))){
            ans += abs(nxt->second - it->second);
        }
        else if(nxt->first!= (it->first+1)){
            ans += it->second;
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