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

    
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			a[i] += a[i+1];
			swap(a[i],a[i+1]);
		}
	}

	cout << a[n-1] << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}