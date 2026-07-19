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

    vector<vector<int>> pre(n, vector<int>(3, 0));
    for(int i = 0; i < n; i++){
        if(i>0){
            pre[i][0] = pre[i-1][0];
            pre[i][1] = pre[i-1][1];
            pre[i][2] = pre[i-1][2];
        }
        pre[i][a[i]-1]++;
    }

    vector<int> suf(n+1, INT_MIN);
    for(int j=n-2; j>0; j--){
        int cur = pre[j][0] + pre[j][1] - pre[j][2];
        suf[j] = max(cur, suf[j+1]);
    }

    for(int i=0; i<n-2; i++){
        if(pre[i][0]>=pre[i][1]+pre[i][2]){
            if(suf[i+1]>=pre[i][0]+pre[i][1]-pre[i][2]){
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}