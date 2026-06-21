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

    vector<int> h(n);
    int mx = INT_MIN;

    int ans = INT_MIN;
    for(auto &it:h){
    	cin >> it;
    	mx = max(mx,it);
    }

    for(int i=0; i<n;i++){
    	ans = max(ans,mx+1-h[i]);
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