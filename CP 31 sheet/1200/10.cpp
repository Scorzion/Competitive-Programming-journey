#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, q;
    cin >> n >> q;

    ll mx = LLONG_MIN;
    vector<pair<ll,ll>> a(n);
    for(auto &it:a){
    	cin >> it.first;
    	it.second = max(mx,it.first);
    	mx = max(mx,it.second);
    }



    for(int i=1; i<n; i++){
    	a[i].first += a[i-1].first;
    }

    
    while(q--){
    	ll k;
    	cin >> k;

    	ll l =0;
    	ll r =n-1;

    	ll idx = -1;

    	while(l<=r){
    		ll mid = l + (r-l)/2;

    		if(a[mid].second>k){
    		
    			idx = mid;
    			r = mid - 1;
    		}
    		else{
    			l = mid+1;
    		}
    	}

    	if(idx==0){
    		cout << 0 << " ";
    	}
    	else if(idx==-1){
    		cout << a[n-1].first << " ";
    	}
    	else{
    		cout << a[idx-1].first << " ";
    	}
    }

    cout << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}