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

const int N = 1e5;

void solve(){
    ll d;
    cin >> d;
    
    ll p = d+1;
    bool check = 1;
    for(int i=d+1; ; i++){
        check = 1;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                check = 0;
                break;
            }
        }
        if(check){
            p = i;
            break;
        }
    }
    
    ll q = p+d;
    for(int i=p+d; ; i++){
        check = 1;
        for(int j = 2; j*j<=i; j++){
            if(i%j==0){
                check = 0;
                break;
            }
        }
        if(check){
            q = i;
            break;
        }
    }
    
    cout << min(1LL*p*q, 1LL*p*p*p) << endl;
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
