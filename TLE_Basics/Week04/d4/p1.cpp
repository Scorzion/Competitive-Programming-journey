/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    ll k, s;
    cin >> k >> s;

    ll ans = ((s+2)*(s+1))/2;

    if(k>=s){
        cout << ans << endl;
    }
    else{
        if(s>3*k){
            cout << 0 << endl;
        }
        
        if(s>k && s<=2*k){
            cout << ans - (3*(s-k+1)*(s-k))/2*1LL << endl;
        }
        
        if(s>2*k && s<=3*k){
            cout << ans - (3*(s-k+1)*(s-k))/2*1LL + (3*(s-2*k)*(s-2*k-1))/2*1LL << endl;
        }
    }
}
