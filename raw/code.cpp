#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    vector<ll> c(n);
    for(auto &it:c) cin >> it;
    map<ll,ll> odd;
    map<ll,ll> even;

    for(int i=0; i<n; i++){
        if(i & 1){
            even[c[i]]++;
        }
        else{
            odd[c[i]]++;
        }
    }

    ll mx1 = 0;
    for(auto it:odd){
        mx1 = max(mx1, it.second);
    }
    mx1 = (n+1)/2 - mx1;

    ll mx2 = 0;
    for(auto it:even){
        mx2 = max(mx2, it.second);
    }
    mx2 = (n)/2 - mx2;

    cout << min(mx1, mx2) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}