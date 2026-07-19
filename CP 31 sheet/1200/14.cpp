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

    vector<vector<int>> a(n, vector<int> (n));
    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		a[i][j] = (s[j]=='1'? 1 : 0);
    	}
    }

    int ans = 0, val = 0;
    for(int i=0; i<n/2; i++){
    	for(int j=0; j<(n+1)/2; j++){
    		val = a[i][j] + a[j][n-1-i] + a[n-1-i][n-1-j] + a[n-1-j][i];
    		ans += min(4-val,val);
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