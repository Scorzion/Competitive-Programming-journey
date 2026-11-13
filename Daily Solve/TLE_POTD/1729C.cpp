#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    string s;
    cin >> s;
    int n = sz(s);

    bool inc = s[0] <= s[n-1];
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        v[i] = {inc ? s[i] : -s[i], i};
    }
    sort(all(v));

    int p = -1, q = -1;
    for(int i=0; i<n; i++){
        if(v[i].second == 0) p = i;
        if(v[i].second == n-1) q = i;
    }

    vector<int> path;
    for(int i=p; i<=q; i++) path.pb(v[i].second + 1);

    cout << abs(s[0]-s[n-1]) << " " << sz(path) << endl;
    for(int x : path) cout << x << " ";
    cout << endl;
 
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}