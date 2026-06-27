#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    ll ans = 0;
    ll alt = 0;

    vector<ll> dp(3,0);
    for(int i=0; i<n; i++){
        vector<ll> temp = dp;
        if(s[i] == '1'){
            temp[0] = dp[2];
            temp[1] = dp[0] + 1;
            temp[2] = dp[1];
        }
        else{
            temp[0] = dp[1];
            temp[1] = dp[2];
            temp[2] = dp[0] + 1;
        }
        dp = temp;

        if(i && s[i] != s[i-1]) alt++;
        else alt = 1;

        ans += dp[1] + dp[2] - (alt-1)/2;
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