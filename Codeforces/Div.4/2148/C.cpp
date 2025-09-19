/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        cin >> b[i];
    }
    
    int t = 0;
    int side = 0;
    int dt = 0;
    int ans = 0;
    
    for(int i=0; i<n; i++){
        dt = a[i] - t;
        ans += dt;
        if(side==b[i] && dt%2==1){
            ans--;
        }
        
        if(side!=b[i] && dt%2==0){
            ans--;
        }
        
        t = a[i];
        side = b[i];
    }
    
    if(m-a[n-1]>0){
        ans += m-a[n-1];
    }
    
    cout << ans << endl;
}


int main(){
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    
    return 0;
}
    