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

    vector<ll> a(n);
    map<ll,ll> mp;
    for(auto &it:a){
    	cin >> it;
    	mp[(32-__builtin_clz(it))]++;
    }

    ll ans = 0;
    for(auto it:mp){
    	if(it.second>1){
    		ans += (it.second)*(it.second-1);
    	}
    }

    cout << ans/2LL << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}