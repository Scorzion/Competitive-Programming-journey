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
    int n;
	ll x;

	cin >> n >> x;

	vector<ll> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	ll lo = 0, hi = 2000000007;
	
	while(lo<hi){
		ll mid = lo + (hi-lo+1)/2;
		ll tot = 0;
		for(int i=0; i<n; i++) {
			tot += max(mid - a[i], 0LL);
		}
		if(tot<=x)lo = mid; 
		else hi = mid - 1;
	}
	cout << lo << endl;

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
