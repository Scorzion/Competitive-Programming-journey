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
    ll a, b;
    cin >> a >> b;

    ll x;
    ll n = a-1;
    if(n%4 == 0) x=n;
    else if(n%4 == 1) x=1;
    else if(n%4 == 2) x=n+1;
    else x=0;
    
    if(x==b){
        cout << a << endl;
    }
    else{
        ll need = x ^ b;
        if(need ==a) cout << a+2 << endl;
        else cout << a+1 << endl;
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
