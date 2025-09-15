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
    ll n, k;
    cin >> n >> k;

    if(n==1){
        if(n!=k){
        cout << -1 << endl;
    
    }

    if(n <= (2*k + 1)){
    	ll x = n;
    	if(x%2==1)
    		x--;

    	x-=2;
    	x/=2;

    	ll y = k - x;

    	cout << y << " " << y*2 << " ";
    	ll z = y*2;

        ll lim = x*2;
    	for(ll i=1; i<= lim; i++){
    		z = z + 1;
    		cout << z << " ";
    	}

    	if(n%2==1){
    		cout << z + 1 << endl;
    	}

    }
    else{
    	cout << -1 << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
