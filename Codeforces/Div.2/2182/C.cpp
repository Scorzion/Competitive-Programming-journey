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

bool check(const vector<ll>& a, const vector<ll>& b, int j, int k, int n){
	for(int i=0; i<a.size(); i++){
		if(a[(i+j)%n]>=b[(i+k)%n]) return false;
	}
	return true;
}

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;
    for(auto &it:c) cin >> it;

    ll c1 = 0, c2 = 0;
	for(int j=0; j<n; j++){
		c1 += check(a,b,j,0,n);
	}
	for(int j=0; j<n; j++){
		c2 += check(b,c,0,j,n);
	}

	cout << c1*c2*n << endl;
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
