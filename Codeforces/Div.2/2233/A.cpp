#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, x, y, z;
    cin >> n >> x >> y >> z;

    ll case1 = n;
    ll case2 = n;

	case1 -= z*(x+y);
	case2 -= z*x;
	
	if(case1 <=0 && case1<= case2 ){
		cout << (n+x+y-1)/(x+y) << endl;
	}
	else if(case2<=case1 && case2<=0){
		cout << (n+x-1)/x << endl;
	}
	else{
		cout << z + min((case1+x+y-1)/(x+y),((case2+x+(10*y)-1)/(x+10*y))) << endl;
	}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}