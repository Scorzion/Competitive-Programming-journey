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

void product(ll a[], ll n){
	ull pro = 1;
	for(ll i=0; i<n; i++){
		pro *= a[i];
		if(pro >= 1e18){
			cout << -1 << endl;
			return;
		}
	}

	if(pro==0){
		cout << -1 << endl;
		return;
	}
	else{
		cout << pro << endl;
		return;
	}
}

void solve(){
    ll n;
    cin >> n;

    ll a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    product(a, n);
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
