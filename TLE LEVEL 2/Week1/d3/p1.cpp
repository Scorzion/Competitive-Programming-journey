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

int solver(int a1, int b1, int a2, int b2, vector<vector<int>> &pre){
	int ans = pre[a2][b2];
	if(a1>0) ans -= pre[a1-1][b2];
	if(b1>0) ans -= pre[a2][b1-1];
	if(a1>0 && b1>0) ans += pre[a1-1][b1-1];

	return ans;
}

void solve(){
    ll n, q;
    cin >> n >> q;

    vector<vector<int>> v(n, vector<int>(n));

    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		v[i][j] = ((s[j]=='*')? 1:0);
    	}
    }

    vector<vector<int>> pre(n, vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            pre[i][j] = v[i][j];
            if(j>0) pre[i][j] += pre[i][j-1];
            if(i>0) pre[i][j] += pre[i-1][j];
            if(i>0 && j>0) pre[i][j] -= pre[i-1][j-1];
        }
    }
    
    while(q--){
    	int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

    	cout << solver(y1-1,x1-1,y2-1,x2-1,pre) << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
