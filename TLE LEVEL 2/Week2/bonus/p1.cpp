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

    vector<int> pre(n);
    for(int i=1; i<=n; i++){
    	int a;
    	cin >> a;
    	pre[i] = (pre[i-1]^a);
    }



    bool yes = !pre[n];
    for(int i=1; i<=n; i++){
    	for(int j=i+1; j<n; j++){
    		yes |= (pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j]));
    	}
    }

    cout << (yes? "YES" : "NO") << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}