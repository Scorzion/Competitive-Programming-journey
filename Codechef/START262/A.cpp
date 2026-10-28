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

    string s;
    cin >> s;

    int ans = 0;
    int tmp = 1;
    for(int i=1; i<n; i++){
    	tmp++;
    	if(s[i]!=s[i-1]){
    		tmp = 1;
    	}
    	else{
    		if(tmp==3){
    			ans++;
    			tmp = 0;
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