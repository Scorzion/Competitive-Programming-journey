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

void solve(){0.]
    cin >> a >> b >> k;

    if(a==b){
    	cout << 1 << endl;
    	return;
    }

    if(a<=k && b<=k){
    	cout << 1 << endl;
   	}
   	else{
   		ll g = gcd(a,b);
   		ll x = a/g;
   		ll y = b/g;
   		if(g>1 && x<=k && y<=k){
   			cout << 1 << endl;
   			return;
   		}
  
   		cout << 2 << endl;
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
