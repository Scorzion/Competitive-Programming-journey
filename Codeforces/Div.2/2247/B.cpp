#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k, m;
    cin >> n >> k >> m;

    if(m<k){
    	cout << "NO" << endl;
    }
    else{

    	if(n==1){
    		cout << "YES" << endl;
    		cout << m << endl;
    		return;
    	}
    	cout << "YES" << endl;

    	for(int i=0; i<n; i++){
    		if((i+1)%k==0){
    			cout << m-k+1 << " ";
    		}
    		else{
    			cout << 1 << " ";
    		}
    	}
    	cout << endl;;

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