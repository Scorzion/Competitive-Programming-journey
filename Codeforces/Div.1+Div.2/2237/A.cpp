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

    ll ans = 0;
	ans += a[0];
	ll mn = a[0];

	for(int i=1; i<n; i++){
		ans += min(mn,a[i]);
		mn = min(mn,a[i]);
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