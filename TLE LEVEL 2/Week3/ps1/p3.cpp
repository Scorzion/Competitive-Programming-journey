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

    vector<vector<int> s(n,vector<int> (n));
    int ans = 0;
    for(int mask=0; mask<(1<<n)-1; mask++){
    	bool flag = true;
    	for(int i=0; i<n; i++){
    		if(mask & (1<<i)){
    			for(int j=0; j<n; j++){
    				int good = (mask & (1<<j)? 1:0);
    				if((s[i][j]==1 && !good) || (s[i][j]=0 && good)){
    					flag = false;
    					break;
    				}
    			}
    		}
    		if(flag==false) break;
    	}
    	if(flag==true){
    		ans = max(ans,__builtin_popcount(mask));
    	}
    }

    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}