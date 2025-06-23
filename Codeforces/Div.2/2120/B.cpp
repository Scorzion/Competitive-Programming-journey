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
    int n,s;
    cin >> n >> s;

    int a[n][4];
    for(int i=0; i<n; i++){
    	for(int j=0; j<4; j++){
    		cin >> a[i][j];
    	}
    }

    int ans = 0;
    for(int i=0; i<n; i++){
    	if(a[i][2]==a[i][3] && a[i][0]==a[i][1]){
    		ans++;
    	}

    	if(a[i][2]== s - a[i][3] && a[i][0]== -a[i][1]){
    		ans++;
    	}
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
