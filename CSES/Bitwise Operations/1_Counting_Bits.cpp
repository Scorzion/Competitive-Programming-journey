#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n;
    cin >> n;

    ll mx = 64-__builtin_clzll(n);
    ll sum = 0;

    for(int i=1; i<=mx; i++){
    	ll sub = ((n+1)/(1LL<<i));
    	sum += (sub)*(1LL<<(i-1));

  		ll rem = (n+1)%(1LL<<i);
		if(rem>(1LL<<(i-1)))
    		sum += rem-(1LL<<(i-1));
    }

    cout << sum << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}