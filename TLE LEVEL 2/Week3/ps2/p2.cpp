#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll mod = 998244353;

void solve(){
    ll n, m;
    cin >> n >> m;

    if(n==0 || m==0){
        cout << 0 << endl;
        return;
    }

    ll ans = 0;
    for(int i=0; i<64-__builtin_clzll(m); i++){
        ll cnt = 0;
        if(m & (1LL<<i)){
            cnt = (cnt + (((n+1LL)/(1LL<<(i+1)))%mod)*((1LL<<i)%mod))%mod;

            if(((n+1LL)%(1LL<<(i+1)))/(1LL<<i)){
                cnt = (cnt + ((n+1LL)%(1LL<<i)))%mod;
            }
        }
        ans = (ans+cnt)%mod;
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}