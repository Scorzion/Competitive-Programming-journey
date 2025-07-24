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

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int b[n];
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
    	cin >> b[i];
    	maxi = max(maxi, b[i]);
    }

    vector<int> check(maxi+1,0);
    int ans = INT_MIN;

    for(int l=0; l<=maxi; l++){
    	check[l] -= l;
    	for(int j=0; j<n; j++){
    		if(a[j]>=0 && b[j]<=l){
    			check[l] += a[j];
    		}
    	}

    	ans = max(ans, check[l]);
    }
   	
   	cout << ans << endl;
   	return; 


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
