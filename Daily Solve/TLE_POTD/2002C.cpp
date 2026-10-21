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

    vector<pair<ll,ll>> c(n);
    for(int i=0; i<n; i++){
    	cin >> c[i].first;
    	cin >> c[i].second;
    }

    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    ll dist = (tx-sx)*(tx-sx) + (ty-sy)*(ty-sy);

    for(int i=0; i<n; i++){
    	ll tmp = (tx-c[i].first)*(tx-c[i].first) + (ty-c[i].second)*(ty-c[i].second);
    	if(tmp<=dist){
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