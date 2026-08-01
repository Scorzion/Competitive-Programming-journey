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

    vector<int> x(n), y(n);
    for(auto &it:x) cin >> it;
    for(auto &it:y) cin >> it;

    for(int i=0; i<n; i++){
    	x[i] = y[i]-x[i];
    }

    sort(all(x));

    int l=0;
    int r=n-1;

    ll ans = 0;
    while(l<r){
    	if(x[r]<0) break;
    	if(x[l]>=0){
    		ans += (r-l+1)/2;
    		break;
    	}

    	if(x[l]<0 && x[r]>=0){
    		if(x[r]>=abs(x[l])){
    			ans++;
    			r--;
    			l++;
    		}
    		else{
    			l++;
    		}
    	}
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