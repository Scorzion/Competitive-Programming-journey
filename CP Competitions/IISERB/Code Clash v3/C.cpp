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
    ll n, a;
    cin >> n >> a;

    vector<ll> v(n);

    ll cntl = 0;
    ll cntr = 0;
    ll cnt = 0;
    for(auto &it:v){
    	cin >> it;
    	if(it<a) cntl++;
    	if(it>a) cntr++;
    	if(it==a) cnt++;
    }

    ll y = max(cntl, cntr);
    
    
    if(cntl==cntr && cntr==0){
    	cout << 0 << endl;
    	return;
    }

    if(cntl>cntr){
    	cout << a-1 << endl;
    }
    else{
    	cout << a+1 << endl;
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
