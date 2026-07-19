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

    string a, b;
    cin >> a >> b; 

    vector<pair<int,int>> pre;

    int cnt1 = 0;
    int cnt0 = 0;
    for(int i=0; i<n; i++){
    	if(a[i]=='1') cnt1++;
    	if(a[i]=='0') cnt0++;

    	pre.pb({cnt1,cnt0});
    }

    vector<int> gap;
    vector<int> idx;
    int x = 0, y = 0;
    for(int i=0; i<n; i++){
    	if(a[i]!=b[i]){
    		if(y>0){
    			gap.pb(y);
    			idx.pb(i-1);
    		}
    		y = 0;
    		x++;
    	}
    	else{
    		if(x>0){
    			gap.pb(x);
    			idx.pb(i-1);
    		}
    		x = 0;
    		y++;
    	}
    }

    if(x>0){
    	gap.pb(x);
    	idx.pb(n-1);
    }

    int flag = (a[0]!=b[0]? 0:1);
    int cy = 0;
    for(int i=sz(gap)-1; i>=0; i--){
    	if(i%2==flag){
    		if(pre[idx[i]].first!=pre[idx[i]].second){
    			cout << "NO" << endl;
    			return;
    		}
    		else{
    			if(cy%2==0) cy++;
    		}
    	}
    	else{
    		if(cy%2==1){
    			if(pre[idx[i]].first!=pre[idx[i]].second){
	    			cout << "NO" << endl;
	    			return;
    			}
    			else{
    				cy++;
    			}
    		}
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