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

int answer(int a, int b, int c, int d, vector<vector<int>> &shri){
	ll x = shri[c-1][d-1];
	if(a-1>0) x -= shri[a-2][d-1];
	if(b-1>0) x -= shri[c-1][b-2];
	if(a-1>0 && b-1>0) x += shri[a-2][b-2];

	if(x==(d+1-b)*(c+1-a)) return 1;
	return 0;
}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> v[i][j];
    	}
    }

    vector<vector<int>> shri(n,vector<int> (m));

    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		shri[i][j] = v[i][j];
    		if(j>0){
    			shri[i][j] += shri[i][j-1];
    		}
    		if(i>0){
    			shri[i][j] += shri[i-1][j];
    		}
    		if(i>0 && j>0){
    			shri[i][j] -= shri[i-1][j-1];
    		}
    	}
    }

    int q;
    cin >> q;

    while(q--){
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;

    	cout << answer(a,b,c,d, shri) << endl;
    }


}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
