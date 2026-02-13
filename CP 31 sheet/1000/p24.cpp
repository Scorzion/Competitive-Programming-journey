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
#include <climits>
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
    ll n, m;
    cin >> n >> m;

    ll sum = 0;
    ll mini = LLONG_MAX;
    ll neg = 0;
    vector<vector<ll>> v(n,vector<ll> (m));
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> v[i][j];
    		sum += abs(v[i][j]);

    		if(v[i][j]<=0) neg++;

    		mini = min(mini, abs(v[i][j]));
    	}
    }

    if((neg ^ 1)&1){
    	cout << sum << endl;
    }
    else{
    	cout << sum - 2*mini << endl;
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
