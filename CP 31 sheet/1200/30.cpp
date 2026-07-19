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

    int idx = -1;
	int mark = -1;
	bool flag = 1;
	vector<pair<int,int>> ans;

	for(int i=1; i<n; i++){
		if(a[i]!=a[i-1]){
			if(flag){
				flag = 0;
				mark = i;
			}
			idx = i;
			ans.pb({idx,i+1});
		}
		else{
			if(idx != -1){
				ans.pb({idx,i+1});
			}
		}
	}

	for(int i=mark-2; i>=0; i--){
		ans.pb({mark+1,i+1});
	}


	if(sz(ans)==n-1){
		cout << "YES" << endl;
		for(auto &it:ans){
			cout << it.first << " " << it.second << endl;
		}
	}
	else{
		cout << "NO" << endl;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}