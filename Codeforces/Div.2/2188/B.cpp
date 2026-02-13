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
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            ans++;
        }
    }
    
    if(n==1 || n==2){
        cout << 1 << endl;
        return;
    }
    else{
        if(s[0]=='0' && s[1]=='0'){
            if(s[2]=='1'){
                s[0]='1';
            }
            else{
                s[1]='1';
            }
            ans++;
        }

        
        if(s[n-1]=='0' && s[n-2]=='0'){
            if(s[n-3]=='1'){
                s[n-1]='1';
            }
            else{
                s[n-2]='1';
            }
            ans++;
        }
        

        ll cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                cnt++;
            }
            else{
                
                ans += cnt/3;
                cnt = 0;
            }
        }
    }
    
    cout << ans << endl;

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
