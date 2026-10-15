#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    a %= b;
    for(int i=1; i<=b; i++){
    	a *= 10;
    	int dig = a/b;
    	a %= b;

    	if(dig == c){
    		cout << i << endl;
    		return;
    	}
    }

    cout << -1 << endl;

   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	solve();
    return 0;
}