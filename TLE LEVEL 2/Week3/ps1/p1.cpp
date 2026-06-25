#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, m;
    cin >> n >> m;

    bitset<40> a;
    bitset<40> b;

    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;

    	a[x] = 1;
    }

    for(int i=0; i<m; i++){
    	int x;
    	cin >> x;

    	b[x] = 1;
    }

    bitset<40> ans;
    ans = a&b

 	
    cout << ans.count() << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}