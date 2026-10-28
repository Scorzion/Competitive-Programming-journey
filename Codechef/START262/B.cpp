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

   	int ans = 0;
   	for(int i=n-1; i>=0; i--){
   		if(s[i]=='1'){
   			ans++;
   			i = max(0, i-k);
   			if(i<=0){
   				break;
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