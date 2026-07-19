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

     string s;
     cin >> s;

    if(n<2*k){
    	cout << -1 << endl;
    }
    else{
    	int ans = 0;
    	for(int i=0; i<k; i++){
    		if(s[i]!='R') ans++;
    		if(s[n-i-1]!='L') ans++;
    	}

    	cout << ans << endl;
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