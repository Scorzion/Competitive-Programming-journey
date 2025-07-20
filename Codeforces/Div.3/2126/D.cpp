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

    vector<vector<int>> v(n, vector<int>(3));
    for(int i=0; i<n; i++){
     	cin >> v[i][0];
     	cin >> v[i][1];
     	cin >> v[i][2];
    }

    sort(v.begin(),v.end());

    int i=0;
    while(i<n){
    	if(k>= v[i][0] && k<= v[i][1]){
    		if(k<=v[i][2]){
    			k = v[i][2];
    		}
    	}
    	i++;
    }

    cout << k << endl;
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
