#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll a, b, x;
    cin >> a >> b >> x;

    ll mx = max(a,b);
    ll mn = min(a,b);

    ll cnt = 0;
    ll ans = mx-mn;

    ll max = log(a)/log(x) + log(b)/log(x);
    while(cnt<=max){
        cnt++;
        mx /= x;
        if(mx<=mn){
            swap(mx,mn);
        }
        ans = min(ans,cnt+mx-mn);
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