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
    ll n, c;
    cin >> n >> c;
    
    vector<ull> s(n);
    for(auto &it:s) cin >> it;
    
    ll l =1;
    ll r =5e8;
    
    ull mid;
    
    while(l<=r){
        mid = (l+r)/2;
        
       ll val = 0;
        for(int i = 0; i < n; i++){
            ll cur = s[i] + 2 * mid;
            val += cur * cur;
            if(val > c) break;
        }
        
        if(val==c){
            cout << mid << endl;
            break;
        }
        
        if(val>c){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
        
        
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
