#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);

    ll sum = 0;
    for(auto &it:a){
    	cin >> it;
    	sum += it;
    }
    sort(all(a));

    vector<ll> pre(n,0);
    pre[0] = a[0];
    for(int i=1; i<n; i++){
    	pre[i] = a[i] + pre[i-1];
    }

    ll tot = 0;
    ll d = 0;
    for(int i=n-1; i>=0; ){
    	while(i>=0 && pre[i]>x) i--; 
        if(i < 0) break;

        ll d = (x-pre[i])/(i+1);     
        tot += d+1;
        i--;
    }
    cout << tot << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}