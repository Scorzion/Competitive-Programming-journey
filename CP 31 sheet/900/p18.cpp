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
    ll a, b, c;
    cin >> a >> b >> c;

    if((2*b-c)%a==0 && (2*b-c)/a>0){
        cout << "YES" << endl;
        return;
    }

    if((2*b-a)%c==0 && (2*b-a)/c>0){
        cout << "YES" << endl;
        return;
    }

    if((c+a)%(2*b)==0){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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
