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

int checker(vector<vector<int>> &p1, vector<vector<int>>&p2, vector<vector<int>> &q1, vector<vector<int>> &q2, vector<vector<int>> &p, vector<vector<int>> &q){
	int ans = 0;
	for(int i=0; i<p.size(); i++){
		for(int j=0; j<p.size();j++){
			if(p1[i][j]!=p[i][j]) ans++;
			if(p2[i][j]!=p[i][j]) ans++;
		}
	}

	for(int i=0; i<p.size(); i++){
		for(int j=0; j<p.size();j++){
			if(q1[i][j]!=q[i][j]) ans++;
			if(q2[i][j]!=q[i][j]) ans++;
		}
	}

	return ans;
}

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> a(n,vector<int> (n));
    vector<vector<int>> b(n,vector<int> (n));
    vector<vector<int>> c(n,vector<int> (n));
    vector<vector<int>> d(n,vector<int> (n));

    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		a[i][j] = s[j]-48;
    	}
    }

    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		b[i][j] = s[j]-48;
    	}
    }

    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		c[i][j] = s[j]-48;
    	}
    }
    for(int i=0; i<n; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<n; j++){
    		d[i][j] = s[j]-48;
    	}
    }

    vector<vector<int>> p(n,vector<int> (n));
    vector<vector<int>> q(n,vector<int> (n));

    int start = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cnt++;
    		p[i][j] = start;
    		if(cnt%2==0){
    			start++;
    		}
    		else{
    			start--;
    		}
    	}
    }

    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cnt++;
    		q[i][j] = start;
    		if(cnt%2==0){
    			start++;
    		}
    		else{
    			start--;
    		}
    	}
    }

    int ans = INT_MAX;

    vector<vector<vector<int>>> mat = {a, b, c, d};
	vector<int> perm = {0,1,2,3};


	do{
    	int cur = checker(mat[perm[0]],mat[perm[1]],mat[perm[2]],mat[perm[3]],p,q);
    	ans = min(ans, cur);
	}
	while(next_permutation(perm.begin(), perm.end()));

    cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
