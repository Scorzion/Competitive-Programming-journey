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
    ll k, a, b;
    cin >> k >> a >> b;

    ll x = a%k;
    ll y = b%k;

    ll p = a/k;
    ll q = b/k;

    if(a<k && b<k){
    	cout << -1 << endl;
    	return;
    }

    if(x==0 && y==0){
    	cout << p + q << endl;
    	return;
    }
    

    if((x==0 && p>0) || (y==0 && q>0)){
    	cout << p + q << endl;
    	return;
    }
    

    if(x!=0 && y!=0 && p>0 && q>0){
    	cout << p + q << endl;
    	return;
    }

    cout << -1 << endl;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
