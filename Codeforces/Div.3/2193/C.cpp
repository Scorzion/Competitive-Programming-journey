/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

**/
 
#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

    a[n-1] = max(a[n-1],b[n-1]);

	ll s = 0;
	for(int i=n-2; i>=0; i--){
		s = max(b[i],a[i+1]);
		a[i] = max(s,a[i]);
	}

	for(int i=1; i<n; i++){
		a[i] += a[i-1];
	}


	while(q--){
		ll l, r;
		cin >> l >> r;
		cout << a[r-1] - (l>1? a[l-2] : 0) << " ";
		
	}
	cout << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
