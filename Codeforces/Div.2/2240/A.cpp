#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n;
    int k;
    cin >> n >> k;

    vector<ll> cnt(25,0);
    cnt[0]=k;

    ll ans=0;

    for(int i=0; i<20; i++){
        ll cost = 1LL<<i;

        while(cnt[i]>0 && n>=cost){
            cnt[i]--;
            cnt[i+1]++;
            n-=cost;
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