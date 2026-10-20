/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cinttypes>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
	ll l, r, k;
	cin >> l >> r >> k;

	if(r-l==0){
		if(r==1){
			cout << "NO" << endl;
			return;
		}
		else{
			cout << "YES" << endl;
			return;
		}
	}

	ll n = r - l + 1;
	vector<ll> v(n);

	for(ll i=0; i<n; i++){
		v[i] = l+i;
	}


	while(k>=0 && v.size()>1){

		ll gcd_v = __gcd(v[0], v[1]);

		for(ll i=2; i<v.size(); i++){
			gcd_v = __gcd(gcd_v, v[i]);
		}

		if(gcd_v>1){
			cout << "YES" << endl;
			return;
		}

		if(k>0){
		int x = v[0]*v[1];
		v.erase(v.begin());
		v.erase(v.begin());
		v.pb(x);
		}
		k--;

	}

	if(v.size()==1){
		if(v[0]!=1){
			cout << "YES" << endl;
			return;
		}
	}

	cout << "NO" << endl;
	return;

}

// gives MLE.

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
