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

    int sbits = __builtin_popcount(n);

    if(n>=k && sbits<=k){
    	cout << "YES" << endl;
    	bitset<32> b(n);
    	vector<int> ans(32,0);

    	for(int i=0; i<32; i++){
    		ans[31-i] = b[i];
    	}

    	for(int i=0; i<32; i++){
    		int gap = k-sbits;
    		if(gap==0) break;
    		else{
    			if(ans[i]==0){
    				continue;
    			}

    			if(ans[i]<=gap){
    				sbits += ans[i];
    				ans[i+1] += (2*ans[i]);
    				ans[i] = 0;
    			}
    			else{
    				sbits += gap;
    				ans[i+1] += (2*gap);
    				ans[i] -= gap;
    			}
    		}
    	}

    	reverse(ans.begin(),ans.end());

    	for(int i=0; i<32; i++){

    		for(int j=0; j<ans[i]; j++){
    			cout << (1<<i) << " ";
    		}
    	}
    	cout << endl;
    }
    else{
    	cout << "NO" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}