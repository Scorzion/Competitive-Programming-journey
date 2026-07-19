#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll mod = 998244353;

void solve(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    int xr = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        xr ^= a[i];
    }
    
    if(n == 1){ 
        cout << 0 << endl;
        return;
    }

    if(xr == 0){
        cout << 1 << endl;
        return;
    }
    
    int mval = 1 << (31-__builtin_clz(xr));
    
    ll cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i]&mval) cnt++;
    }
    
    cout << cnt % mod  << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}