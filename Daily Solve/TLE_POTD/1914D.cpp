#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll NEG = LLONG_MIN/4;

void solve(){
    int n;
    cin >> n;

    vector<vector<ll>> v(3, vector<ll>(n));
    for(int j=0; j<3; j++)
        for(int i=0; i<n; i++) cin >> v[j][i];

    array<ll, 8> dp;
    dp.fill(NEG);
    dp[0] = 0;

    for(int i=0; i<n; i++){
        array<ll, 8> nd = dp; 
        for(int mask=0; mask<8; mask++){
            if(dp[mask]==NEG) continue;

            for(int j=0; j<3; j++){
                if(mask&(1<<j)) continue;
                int nm = mask|(1<<j);
                nd[nm] = max(nd[nm], dp[mask] + v[j][i]);
            }
        }
        dp = nd;
    }

    cout << dp[7] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}