#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> cnt(m, 0);
    for(int i=0; i<n; i++){
        int x; 
        cin >> x;

        cnt[x%m]++;
    }

    ll ans = 0;
    if(cnt[0]>0) ans++;                      
    if(m%2==0 && cnt[m/2]>0) ans++;      

    for(int r=1; r<m-r; r++){             
        int c1 = cnt[r];
        int c2 = cnt[m-r];

        if(c1 == 0 && c2 == 0) continue;
        ans += max(1, abs(c1-c2));
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