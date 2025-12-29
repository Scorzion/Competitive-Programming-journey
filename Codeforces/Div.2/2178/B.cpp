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
    string r;
    cin >> r;

    int n = r.length();
    ll ans = 0;
    if(r[0]=='u'){
    	ans++;
    	r[0]='s';
    } 
    if(r[n-1]=='u'){
    	ans++;
    	r[n-1]='s';
    } 

    for(int i=1; i<n-1; i++){
    	if(r[i]=='u' && r[i-1]=='u'){
    		ans++;
    		r[i]='s';
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
