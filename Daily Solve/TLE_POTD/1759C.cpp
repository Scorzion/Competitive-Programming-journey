#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if(a==b){ 
        cout << 0 << endl; 
        return; 
    }
    
    if(abs(a-b)>=x){ 
        cout << 1 << endl; 
        return; 
    }

    bool aL = (a-l>=x), aR = (r-a>=x);
    bool bL = (b-l>=x), bR = (r-b>=x);

    if((aL&&bL) || (aR&&bR)){ 
        cout << 2 << endl; 
        return; 
    }

    if(r-l>=x && ((aL&&bR) || (aR&&bL))){
        cout << 3 << endl; 
        return;
    }
    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}