#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> v(n);

    ll sum = 0;
    for(auto &it:v){
    	cin >> it;
    	sum += it;
    }

    if((sum+x)%2==y%2){
    	cout << "Alice" << endl;
    }
    else{
    	cout << "Bob" << endl;
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