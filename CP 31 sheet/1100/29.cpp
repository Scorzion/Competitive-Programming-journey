/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    ll even = a[0];
	ll odd = a[1];

	for(int i=2; i<n; i++){
		if(i & 1){
			odd = __gcd(odd,a[i]);
		}
		else{
			even = __gcd(even,a[i]);
		}
	}

	bool chko = 1;
	bool chke = 1;

	for(int i=0; i<n; i++){
			if(i&1){
				if(a[i]%even==0){
					chke = 0;
				}
			}
			else{
				if(a[i]%odd==0){
					chko = 0;
				}
			}
	}
		

	if(chko){
		cout << odd << endl;
	}
	else if(chke){
		cout << even << endl;
	}
	else{
		cout << 0 << endl;
	}


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}