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


ll pow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}


void solve(){
    ll n;
    cin >> n;

    ll ans = 0;
    ll rest = n;
    while(rest > 0){
	        
        ll x = 0;
        ll p = 1;
        while (p * 3 <= rest) {
            p *= 3;
            x++;
        }


        ll y = pow(3, x + 1);
        if (x >= 1) {
            y += x * pow(3, x - 1);
        }

        ans += y;
        rest -= p; 
	}

	cout << ans << endl;



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
