#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m);
    for(auto &it:a) cin >> it;

    sort(all(a));
	
	vector<ll> gap;
	for(int i=0; i<m-1; i++){
		gap.pb(a[i+1]-a[i]-1);
	}

	gap.pb(n-a[m-1]+a[0]-1);

	sort(all(gap));
	reverse(all(gap));

	ll saved = 0;
	ll days = 0;

	for(ll g:gap){
    	ll rem = g-2*days;

    	if(rem<=0) continue;
	    if(rem==1){
	        saved += 1;
	        days += 1;
	    }
	    else{
	        saved += rem-1;
	        days += 2;
	    }
	}

	cout << n-saved << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}