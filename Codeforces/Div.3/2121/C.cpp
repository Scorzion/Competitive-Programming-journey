/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    int n, m;
    cin >> n >> m;

    int maxi = INT_MIN;
    int a[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> a[i][j];
    		maxi = max(maxi, a[i][j]);
    	}
    }

    int cnt = 0;
    int flag = 0;
    int il = 0;
    int jl = 0;


    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		if(a[i][j]==maxi && flag == 0){
    			cnt++;
    			flag = 1;
    			il = i;
    			jl = j;
    		}

    		if(a[i][j]==maxi && i != il && j!=jl){
    			cout << maxi << endl;
    			return;
    		}
    	}
    }         
   

    cout << maxi -1 << endl;
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
