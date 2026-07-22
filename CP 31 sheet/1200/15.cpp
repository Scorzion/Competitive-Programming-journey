#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);

    ll mx = 0;
    for(auto &it:a){
    	cin >> it;
    	mx += it;
    }

    if(s>mx){
    	cout << -1 << endl;
    	return;
    }

    if(mx-s==0){
    	cout << 0 << endl;
    	return;
    }

    vector<int> pre;
    ll cnt = 0;
    for(int i=0; i<n; i++){
    	cnt++;
    	if(a[i]==1){
    		pre.pb(cnt);
    	}
    }

    vector<int> suf;
    cnt = 0;
    for(int i=n-1; i>=0; i--){
    	cnt++;
    	if(a[i]==1){
    		suf.pb(cnt);
    	}
    }

    ll ops = INT_MAX;
    for(int i=0; i<=mx-s; i++){
    	ll l = (i>0? pre[i-1]:0);
    	ll r = (i<mx-s? suf[mx-s-i-1]:0);
    	ops = min(ops, l+r);
    }

    cout << ops << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}