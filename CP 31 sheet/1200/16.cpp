#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);

    ll sum = 0;
    for(auto &it:a){
    	cin >> it;
    	sum += it;
    } 
    
    ll last = -1;
    set<ll> st;

    while(q--){
    	int t;
    	cin >> t;

    	if(t==1){
    		ll i, x;
    		cin >> i >> x;

			if(st.count(i-1) || last ==-1){
				sum -= a[i-1];
				a[i-1] = x;
				sum += x;
			}
			else{
				sum -= last;
				a[i-1] = x;
				sum += x;
			}
			st.insert(i-1);
    	}
    	else{
    		st.clear();
    		ll x;
    		cin >> x;

    		sum = x*n;
    		last = x;
    	}

    	cout << sum << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}