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

    vector<int> a(n);
   	for(auto &it:a) cin >> it;

   	int cnt = 0;
   	int ans = n+1;
   	for(int i=0; i<n; i++){
   		cnt = 0;
   		for(int j=0; j<n; j++){
   			if(a[j]%a[i]!=0) cnt++; 
   		}
   		ans = min(ans,cnt);
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