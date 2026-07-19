#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll mod = 1e9 + 7;

template <typename T>
T modpow(T base, T exp, T mod)
{
    T result = 1;
    base %= mod;
    while(exp>0)
    {
        if(exp&1) result = result*base % mod;
        base = base*base % mod;
        exp >>= 1;
    }
    return result;
}

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    int cnt = 0;
    while(cnt<n && a[cnt] == -1){
        cnt++;
    }

    vector<ll> val;
    int i = cnt;
    while (i<n) {
        int j = i;
        while(j<n && a[j]==a[i]){
            j++;
        }
        val.pb(a[i]);
        i = j;
    }

    int m = sz(val);
    int seq = m + (cnt>0? 1:0);

    ll q = 0;
    for(int k=0; k<m-1; k++){
        if(val[k+1]-val[k]==1){
            q++;
        }
    }

    ll chk = 1+(cnt>0? q:0);
    ll ans = chk%mod * modpow(2LL, (ll) n-seq, mod)%mod;
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