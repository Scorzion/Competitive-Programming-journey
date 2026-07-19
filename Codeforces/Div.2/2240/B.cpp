#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll MOD = 998244353;

ll modpow(ll a, ll b){
    ll res=1;
    while(b){
        if(b&1) res=res*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }
    return res;
}

void solve(){
    ll n,m,r,c;
    cin >> n >> m >> r >> c;

    ll idx = (r-1)*m+(c-1)*n-(r-1)*(c-1);
    cout << modpow(2,idx) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}