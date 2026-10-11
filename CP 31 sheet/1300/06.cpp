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

    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    
    ll mx = LLONG_MIN;
    for(int i=0; i<n; i++){
    	ll b;
    	cin >> b;
    	a[i] -= b;

    	mx = max(mx, a[i]);
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
    	if(a[i] == mx){
    		cnt++;
    		a[i] = 1;
    	}
    	else{
    		a[i] = 0;
    	}
    }

    cout << cnt << endl;
    for(int i=0; i<n; i++){
    	if(a[i]){
    		cout << i+1 << " ";
    	}
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}