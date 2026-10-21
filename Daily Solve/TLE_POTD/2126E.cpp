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

    vector<ll> p(n), s(n), a(n);
    for(auto &it:p) cin >> it;
    for(auto &it:s) cin >> it;

   	for(int i=0; i<n; i++){
   		a[i] = p[i]/__gcd(p[i],s[i]) * s[i]; //lcm
   	}

   	vector<ll> pp(n), ss(n);
   	
   	pp[0] = a[0];
   	
   	for(int i=1; i<n; i++){
   		pp[i] = __gcd(pp[i-1], a[i]);
   	}
   	ss[n-1] = a[n-1];
   	for(int i=n-2; i>=0; i--){
   		ss[i] = __gcd(ss[i+1], a[i]);
   	}

   	if(pp==p && ss==s){
   		cout << "YES" << endl;
   	}
   	else{
   		cout << "NO" << endl;
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