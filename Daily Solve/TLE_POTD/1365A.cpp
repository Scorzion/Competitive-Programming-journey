#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int> (m));
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> a[i][j];
    	}
    }

    bool ans = 0;
    for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	    	if(a[i][j]==1){
	    		for(int k=0; k<m; k++){
	    			if(a[i][k]!=1) a[i][k]=-1;
	    		}
	    		for(int l=0; l<n; l++){
	    			if(a[l][j]!=1) a[l][j]=-1;
	    		}
	    	}
	    }
	}

	bool found = 0;
    while(true){
    	found  = 0;

    	int p = -1, q = -1;
    	for(int i=0; i<n; i++){
    		for(int j=0; j<m; j++){
    			if(a[i][j]==0){
    				a[i][j]=1;
    				p = i;
    				q = j;
    				found = 1;
    				ans = !ans;
    				break;
    			}
    		}
    		if(found) break;
    	}

    	if(!found){
    		break;
    	}
	    
	    for(int k=0; k<m; k++){
	    	if(a[p][k]!=1) a[p][k]=-1;
	    }

	    for(int l=0; l<n; l++){
	    	if(a[l][q]!=1) a[l][q]=-1;		
	    }
    }

    cout << (ans? "Ashish":"Vivek") << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}