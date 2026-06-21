#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    vector<bitset<32>> v(n);
    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;
    	v[i] = x;
    }


    ll ans = 0;
    for(int i=0; i<32; i++){
    	ll cnt = 0;
    	for(int j=0; j<n; j++){
    		if(v[j][i]) cnt++;
    	}

    	ans += (cnt+k-1)/k;
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