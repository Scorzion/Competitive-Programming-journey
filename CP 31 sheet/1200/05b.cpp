#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
	cin >> n >> k; 

	vector<int> v(n);
	for(auto &it:v) cin >> it;

	vector<int> colours[k+1]; 

	for(int i=1; i<=k; i++){
		colours[i].pb(0); 
	}

	for(int i=0; i<n; i++){
		colours[v[i]].pb(i+1);
	}

	for(int i=1; i<=k; i++){
		colours[i].pb(n+1);
	}

	priority_queue<int> jumps[k+1];

	int ans = INT_MAX; 

	for(int i=1; i<=k; i++){
		for(int j=0; j<sz(colours[i])-1; j++){
			jumps[i].push(colours[i][j + 1] - colours[i][j] - 1);
		}

		int max_val = jumps[i].top(); 
		jumps[i].pop(); 

		if(max_val%2==0){
			jumps[i].push(max_val/2);
			jumps[i].push((max_val/2)-1);
		}
		else{
			jumps[i].push(max_val/2);
			jumps[i].push(max_val/2);
		}

		ans = min(ans, jumps[i].top()); 
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
