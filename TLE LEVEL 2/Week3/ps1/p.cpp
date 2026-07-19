#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
   	ll a;
	cin >> a;
	
	ll ans = 0;
	for(int i = 0; i < 60; ++i){
		if(a & (1LL << i)){
			ans += (1LL << (i + 1)) - 1;
		}
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