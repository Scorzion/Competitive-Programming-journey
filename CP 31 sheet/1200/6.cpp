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
    vector<ll> ans;

    for(int i=0; i<n; i++){
    	cin >> a[i];

    	if(i==0){
    		ans.pb(a[i]);
    	}
    	if(i!=0 && a[i]!=a[i-1]){
    		ans.pb(a[i]);
    	}
    }

    if(ans.size()==1){
    	cout << 1 << endl;
    	return;
    }

    ll cnt = 0;
    for(int i=1; i<ans.size()-1; i++){
    	if((ans[i]-ans[i-1])*(ans[i]-ans[i+1])>=0LL){
    		cnt++;
    	}
    }

    cout << cnt+2LL << endl;


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}