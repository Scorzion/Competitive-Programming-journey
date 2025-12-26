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
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    int ans = 0;

    for(int len = 1; len<=min(n,m); len++){
    	for(int i=0; i+len<=n; i++){
    		for(int j=0; j+len<=m; j++){
    			if(a.substr(i,len)==b.substr(j,len)){
    				ans = max(ans,len);
    			}
    		}
    	}
    }

    cout << n + m - 2*ans << endl;
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
