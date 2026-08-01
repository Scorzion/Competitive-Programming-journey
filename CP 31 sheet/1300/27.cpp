#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, h;
    cin >> n >> h;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    int k;
	int sz;
    for(int i=0; i<n; i++){
    	vector<int> temp(a.begin(), a.begin()+i+1);

    	sort(all(temp));
    	reverse(all(temp));

    	k = 0;
    	sz = h;
    	int curr = 0;
    	bool chk = 1;
    	for(int j=0; j<sz(temp); j++){
    		if(temp[j]>sz){
    			chk = 0;
    			break;
    		}

    		curr = max(curr,temp[j]);
    		if(j&1 || j==sz(temp)-1){
    			sz -= curr;
    			curr = 0;
    		}
    	}

    	if(!chk){
    		cout << i << endl;
    		return;
    	}
    }

	cout << n << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}