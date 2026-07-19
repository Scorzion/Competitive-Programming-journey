#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, q;
    cin >> n >> q;
    
    vector<pair<int, int>> a(n);
    for (int i = 0; i<n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int mx = 0;
    for(int i=0; i<n; i++) mx = max(mx, (a[i].second^i));

    if(mx==0){
        cout << 0 << endl;
    } 
    else{
        cout << (1<<(31-__builtin_clz(mx))) << endl;
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