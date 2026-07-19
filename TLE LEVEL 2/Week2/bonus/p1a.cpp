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

    vector<int> a(n);
    vector<int> pre(n);
    for(int i=1; i<n; i++){
    	cin >> a[i];

    	if(i==0){
    		pre[i] = a[0];
    		continue;
    	}
    	pre[i] = pre[i-1]^a[i];
    }

    int val = 0;
    for(int i=0; i<n-1; i++){
    	val = pre[n-1]^pre[i];
    	if(val==pre[i] && pre[i+1]==0){
    		cout << "YES" << endl;
    		return;
    	}
    }

    cout << "NO" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}