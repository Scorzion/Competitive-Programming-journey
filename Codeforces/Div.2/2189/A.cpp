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
    ll n, h, l;
    cin >> n >> h >> l;

    ll a = min(h,l);
    ll b = max(h,l);
   	

    vector<ll> v(n);
    ll cnta = 0;
    ll cntb = 0;
    for(auto &it:v){
    	cin >> it;
    	if(it<=a){
    		cnta++;
    	}

    	if(it>a && it<=b){
    		cntb++;
    	}
    } 

    if(cntb>=cnta){
    	cout << cnta << endl;
    }
    else{
    	cout << (cnta+cntb)/2 << endl;
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
