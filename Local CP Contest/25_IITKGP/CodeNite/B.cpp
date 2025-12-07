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
    int n, k;
    cin >> n >> k;

    if(n>=k){
    	cout << "YES" << endl;
    	cout << k << " ";

    	for(int i=1; i<n; i++){
    		if(i!=k){
    			cout << i << " ";
    		}
    	}
    	cout << endl;
    	return;
    }

    int cnt = 0;
    for(int i = 2; i*i <= k; i++) {
            if (n % i == 0)
                cnt++;
        }

        if (cnt > 0){
            
        }
        else{
            cout << "NO" << endl;
            return;
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
