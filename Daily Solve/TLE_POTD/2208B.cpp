#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<int> a(n);
    set<int> s;

    for(auto &it:a){
    	cin >> it;
    }

    for(int i=0; i<n; i++){
    	if(i<k){
    		s.insert(a[i]);
    	}
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