/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 
	when a,b<=1e6
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
    int n, C;
    cin >> n >> C;

    int l = 0;
    vector<vector<int>> v(n, vector<int>(3));
    for(int i=0; i<n; i++){
    	for(int j=0; j<3; j++){
    		cin >> v[i][j];
    		if(j==1) l = max(l, v[i][j]);
    	} 
    }

    vector<int> diff(l+1,0);
    for(int i=0; i<n; i++){
    	diff[v[i][0]-1] += v[i][2];
    	diff[v[i][1]] -= v[i][2]; 
    }

    ll ans = diff[0];
    for(int i=1; i<l; i++){
    	diff[i] += diff[i-1];

    	if(diff[i]>C) diff[i] = C;
    	ans += diff[i];
    }
    cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
