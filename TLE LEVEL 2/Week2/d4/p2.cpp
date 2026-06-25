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

    
	vector<int> ans;
	vector<bool> used(n,0);

	int curr = 0;
	int best = 0;
	int cnt = 0;

	for(cnt = 0; cnt<n; cnt++){
		int idx = -1;

		for(int j=0; j<n; j++){
			if(used[j]) continue;

			if((curr | a[j]) > best){
				idx = j;
				best = (curr | a[j]);
			}
		}

		if(idx==-1) break;

		ans.pb(a[idx]);
		curr = best;
		used[idx] = 1;
		
	}

	if(cnt<=n){
		for(int i=0; i<n; i++){
			if(!used[i]) ans.pb(a[i]);
		}
	}

	for(auto it:ans){
		cout << it << " ";
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