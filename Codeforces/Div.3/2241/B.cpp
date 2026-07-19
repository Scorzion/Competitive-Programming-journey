#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
	ll x;
    cin >> x;

    ll temp = x;
   	int num = 0;
    while(temp>0){
    	temp/=10;
    	num++;
    }

    cout << 1;
    for(int i=1; i<num; i++){
    	cout << 0;
    }
    cout << 1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}