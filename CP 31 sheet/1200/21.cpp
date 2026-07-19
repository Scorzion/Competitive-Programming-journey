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

    vector<ll> a(n);

    map<ll,ll> mp;
    for(auto &it:a){
    	cin >> it;
    	mp[it]++;
    }

    ll ans = 0;
    for(int i=0; i<n; i++){
    	ll cnt = n/a[i];

    	ll temp = 0;
    	for(ll k=i+2; k<=(2LL*cnt)-1LL; k++){
    		if(mp.find(k)!=mp.end()){
    			ans++;
    		}
    		
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