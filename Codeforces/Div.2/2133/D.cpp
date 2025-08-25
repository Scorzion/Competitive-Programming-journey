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
    int n;
    cin >> n;
 
    vector<ll> h(n);
    for(int i = 0; i < n; i++) {
            cin >> h[i];
    }
 
	ll base = 0;
	for(int i = 0; i < n; i++) {
            base += h[i];
    }
    base -= (n - 1);
 
    ll a = 0, b = 0;
    for (int i = 1; i < n; i++) {
        
        ll w = min((ll)i, h[i]) - 2;
        
        if (w < 0)
        	w = 0;
        
        ll c = max(b, a + w);
       	a = b;
		b = c;
    }
 
    cout << (base - b) << endl;
    
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
