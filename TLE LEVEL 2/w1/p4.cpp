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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    vector<vector<ll>> op(m,vector<ll>(3));
	for(ll i=0; i<m; i++){
		for(ll j=0; j<3; j++) cin >> op[i][j];
	}

	vector<ll> diff_q(m+1,0);
	while(k--){
		ll l, r;
		cin >> l >> r;

		diff_q[l-1]++;
		diff_q[r]--;
	}

	for(ll i=1; i<m; i++){
		diff_q[i] += diff_q[i-1];
	}

	vector<ll> diff(n+1,0);
	for(ll i=0; i<m; i++){
		op[i][2] *= diff_q[i]; 
		
		diff[op[i][0]-1] += op[i][2];
		diff[op[i][1]] -= op[i][2];
	}

	
	for(ll i=1; i<n; i++){
		diff[i] += diff[i-1];
	}

	for(ll i=0; i<n; i++){
		diff[i] += a[i];
		cout << diff[i] << " ";
	}

	cout << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
