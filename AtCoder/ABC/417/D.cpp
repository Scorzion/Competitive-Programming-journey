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
    ll n;
    cin >> n;

    ll a[n][3];
    for(ll i=0; i<n; i++){
    	cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    ll q;
    cin >> q;

    while(q--){
    	ll x;
    	cin >> x;

    	for(ll j=0; j<n; j++){
    		if(a[j][0]>=x){
    			x += a[j][1];
    		}
    		else{
    			if(x< a[j][2]){
    				x = 0;
    			}
    			else{
    				x -= a[j][2];
    			}
    		}
    	}

    	cout << x << endl;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
