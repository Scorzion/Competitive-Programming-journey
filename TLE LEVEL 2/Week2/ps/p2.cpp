#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it:v) cin >> it;

    for(int i=0; i<n; i++){
    	v[i] = (v[i]^v[i-1]);
    }

    int q;
    cin >> q;
    while(q--){
    	int l, r;
    	cin >> l >> r;

    	l--; r--;
    	cout << (l>0)? (v[r]^v[l-1]): v[r] << endl;
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