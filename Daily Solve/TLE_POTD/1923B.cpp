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

    map<ll,ll> mp;

    ll x, mx = 0, f = 1, b = 0;
    vector<ll> a(n);

    for(auto &it:a) cin >> it;

    for(int i=0; i<n; i++){
    	cin >> x;
    	if(x<0) x*=-1;
    	mp[x] += a[i];
    	mx = max(mx, x);
    }

    for(int i=0; i<mx; i++){
    	b+=k;
    	if(mp[i+1]<=b) b-=mp[i+1];
    	else{
    		f = 0;
    		break;
    	}
    }

    if(f==1){
    	cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}