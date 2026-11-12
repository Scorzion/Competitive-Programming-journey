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

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    vector<int> dp(n);
    int curr = 0;
    int ans = 0;
    for(int i=n-1; i>=0; i--) {
        dp[i] = (a[i]&1)^curr;
        ans ^= dp[i];
        curr ^= dp[i];

        if(n>=k+i+1){
        	curr ^= dp[k+i];
        }
    }
    
    if(ans){
    	cout << "Alice" << endl;
    }
    else{
    	cout << "Bob" << endl;
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