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
	int n, q;
	cin >> n >> q;

	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];

	vector<int> diff(n,0);
	while(q--){
		int l, r, x;
		cin >> l >> r >> x;

		diff[l-1] += x;
		diff[r] -= (r>n-1? 0: x);
	}

	diff[0] += v[0];
	for(int i=1; i<n; i++){
		diff[i] = diff[i-1] + v[i];
	}
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
