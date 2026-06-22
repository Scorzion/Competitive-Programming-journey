#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

ll kpow(ll x, ll n)
{
    return round(pow(2,(log2(x)*n)));
}

void solve(){
    ll n, k;
    cin >> n >> k;
    
    vector<ll> v(n);
    for(auto &it:v) cin >> it;

    vector<ll> a=v;


	ll cnt = 0;
	for(int i=0; i<n; i++){
		ll temp = 0;

		if(a[i]>0 && a[i]<k){
			cnt++;
			cout << cnt << endl;
		}
		else{
			while(a[i] > 0){
		        if(a[i]%k > 0) temp++;
		        a[i] /= k;
	    	}

	    	if(temp>1){
	    		cout << v[i] << " ";
	    		cnt++;
	    		cout << cnt << endl;
	    	}
		}

    	if(cnt>1){
    		cout << "NO" << endl;
    		return;
    	}
	}

	cout << "YES" << endl;
	
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}