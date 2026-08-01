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

    ll ans = 0;
    for(int i=1; i<=n; i++){
    	if(s[i-1]=='0' || s[i-1]=='2'){
    		if(s[i-1]=='0'){
    			ans += i;
    		}
    		for(int j=2*i; j<=n; j+=i){
    			if(s[j-1]=='0'){
    				ans += i;
    				s[j-1]='2';
    			}
    			else if(s[j-1]=='2'){
    				continue;
    			}
    			else{
    				break;
    			}
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