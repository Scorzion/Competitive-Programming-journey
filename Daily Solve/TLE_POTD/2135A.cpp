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

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    vector<vector<int>> pos(n+1);
	vector<int> dp(n+1,0);

	for(int i=0; i<n; i++){
		int v = a[i];
		pos[v].pb(i);

		dp[i+1]=dp[i];
		if(sz(pos[v])>=v){
			int p = pos[v][sz(pos[v])-v];
			dp[i+1] = max(dp[i+1], dp[p]+v);
		}
	}

	cout << dp[n] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}