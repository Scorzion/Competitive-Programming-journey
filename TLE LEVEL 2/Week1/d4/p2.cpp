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

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    sort(a.rbegin(),a.rend());
	vector<int> diff(n,0);

	while(q--){
		int l,r;
		cin >> l >> r;

		diff[l-1]++;
		if(r!=n) diff[r]--;
	}

	for(int i=1; i<n; i++){
		diff[i] += diff[i-1];
	}

	sort(diff.rbegin(),diff.rend());
	ll ans = 0;
	for(int i=0; i<n; i++){
		ans += diff[i]*a[i];
	}

	cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
