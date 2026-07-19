#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    sort(all(a));

	vector<ll> gap;
	for(int i=0; i<n-1; i++){
		if(a[i+1]-a[i]>x){
			gap.pb(a[i+1]-a[i]-1);
		}
	}

	int ans = sz(gap)+1;
	sort(all(gap));

	for(int i=0; i<sz(gap); i++){
		if(k>0 && (gap[i]/x)<=k){
			k -= gap[i]/x;
			ans--;
		}
		else{
			break;
		}
	}

	cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   	solve();
    return 0;
}