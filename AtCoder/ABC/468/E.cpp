#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const ll MOD = 998244353;

void solve(){
    int n;
    cin >> n;
    
    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    
    vector<ll> p(n+1);
	p[0] = 0;
    for(int i=0; i<n; i++){
    	p[i+1] = (p[i]+a[i])%MOD;
    }

	vector<ll> q(n+1);
    q[0] = p[0];
    for(int i=1; i<=n; i++){
    	q[i] = (q[i-1]+p[i])%MOD;
    }
    
    vector<ll> inv(n+1, 0);
    if(n>=1) inv[1] = 1;
    for(int i=2; i<=n; i++){
        inv[i] = (MOD - (MOD/i)*inv[MOD%i]%MOD)%MOD;
    }
    
    ll ans = 0;
    for(int k=1; k<=n; k++){
        ll t = ((q[n] - q[k-1] - q[n-k])%MOD + MOD)%MOD;
        ans = (ans + t*inv[k])%MOD;
    }
    
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}