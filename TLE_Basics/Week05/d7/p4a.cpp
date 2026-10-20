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

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    ll carry = 0;
    
    int flag = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=0){
            carry += a[i];
        }
        else{
            ll transfer = a[i]+carry;
            if(transfer>=0){
                carry = transfer;
            }
            else{
                carry = 0;
            }
        } 
    }

   
    cout << carry << endl;

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
