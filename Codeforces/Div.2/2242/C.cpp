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

    ll k;
    cin >> k;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    vector<ll> b;
	
    int i=0;
    while(i<n){
        int j=i;

        while(j<n && a[j]==a[i]) j++;

        b.pb(j-i);
        i=j;
    }
 
    sort(b.begin(), b.end());
    
    vector<ll> suf(sz(b)+1, 0);
    for(int idx=sz(b)-1; idx>=0; idx--){
    	suf[idx] = suf[idx+1] + b[idx];
    }

    ll ans=0;
    for(int idx=0; idx<sz(b); idx++){
        if(idx==0 || b[idx]!=b[idx-1]){
            ll val = b[idx];
            ll total = sz(b)-idx;
            ll right = suf[idx];

            ll rem = k-right;
            if(rem % total == 0){
                ll final = rem/total;
                if(final >= 1-val) ans++;
            }
        }
    }
    

    cout  << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}