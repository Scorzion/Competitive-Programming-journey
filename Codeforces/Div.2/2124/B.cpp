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

    int sum[n];
    for(int i=0; i<n; i++){
    	sum[i]=0;
    }

    for(int i=0; i<n-1; i++){
    	int mini = a[0];
        a[i] = a[i] + a[i+1];
    	for(int j=0; j<=i+1; j++){
    		
    		mini = min(mini, a[j]);
    		sum[i] += mini;
    	}
    }



    int mini = INT_MAX;
    for(int i=0; i<n-1; i++){
    	mini = min(mini, sum[i]);
    }

    cout << mini << endl;
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
