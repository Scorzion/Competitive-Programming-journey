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

	ll ans = 0;
	while(n--){
		int a, b;
    	cin >> a >> b;

    	string s;
    	cin >> s;

    	if(s=="keep"){
    		ans += (b-a);
    	}
	}
    

    cout << ans << endl;


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}