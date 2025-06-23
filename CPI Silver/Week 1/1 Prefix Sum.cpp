/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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

	int a[n], p[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	p[0] = a[0];

	for(int i=1; i<n; i++){
		p[i] = a[i] + p[i-1];
	}

	while(q--){
		int l, r;
		cin >> l >> r;
		--r;

		if(!l)
			cout << p[r] << endl;
		else
			cout << p[r] - p[l-1] << endl;
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
