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
    for(auto &it:a) cin >> it;

    ll ans = LLONG_MAX;
	ll j = 0;
	ll tmp = 0;

	for(ll i=0; i<n-1; i++){
		if(a[i]==a[i+1]){
			j++;
		}
		else{
			tmp = (n-i-1)*a[i];
			tmp += (i-j)*a[i];
			ans = min(ans, tmp);
			j = 0;
		}
	}

	if(a[n-1]!=a[n-2]){
		ans = min(ans,(n-1)*a[n-1]);
	}
	else{
		ans = min(ans, (n-1-j)*a[n-1]);
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