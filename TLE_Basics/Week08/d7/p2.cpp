/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
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
	int n;
	cin >> n;

	ll a[n];
	ll b[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	ll ans=0;

	for(int i=1; i<n; i++){
		ll m1 = abs(a[i-1]-a[i]);
		ll n1 = abs(b[i-1]-b[i]);
		ll m2 = abs(a[i-1]-b[i]);
		ll n2 = abs(b[i-1]-a[i]);

		// cout << m1 <<" " <<  n1 << " ";
		// cout << m2 <<" " << n2 << " ";
		if(m1+n1<=m2+n2){
			ans += (m1+n1);
			// cout << m1 << " " << n1 << " ";
			// cout << ans << endl;
		}
		
		if(m1+n1>m2+n2){
			// cout << a[i] << " " << b[i] << " ";
			swap(a[i],b[i]);
			// cout << a[i] << " " << b[i] << " ";
			ans += abs(a[i-1]-a[i]) + abs(b[i-1]-b[i]);
			// cout << ans << endl; 
		}

	}

	cout << ans << endl;
	return;
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
