#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

ll chk(const string& s, int l, int r){
    int diff = 0;
    ll cnt = 0;
    while(l>=0 && r<sz(s) && diff<= 1){
        diff += (s[l]!=s[r]);
        if(diff<=1) cnt++;
        
        l--; 
        r++;
    }

    return cnt;
}

void solve(){
    string s;
    cin >> s;
    
    ll ans = 0;
    for(int i = 0; i<sz(s); i++){
        ans += chk(s, i, i);       
        ans += chk(s, i, i+1);  
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}