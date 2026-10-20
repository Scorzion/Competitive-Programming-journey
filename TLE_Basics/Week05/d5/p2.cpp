/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void rotateMatrix(vector<vector<char>>& mat) {
    int n = mat.size();
    vector<vector<char>> res(n, vector<char>(n));
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[n - j - 1][i] = mat[i][j];
        }
    }

    mat = res;
}

void solve(){
	int n;
	cin >> n;

	vector<vector<char>> v(n, vector<char>(n));
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		for(int j=0; j<n; j++){
			v[i][j]=s[j];
		}
	}


	vector<vector<char>> b=v;
	rotateMatrix(b);

	vector<vector<char>> c=v;
	rotateMatrix(c);

	vector<vector<char>> d=v;
	rotateMatrix(d);

	int cnt=0;
	int ans=0;

	int x = 0;
	if(n%2==0){
		x = n/2;
	}
	else{
		x = n/2 +1;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


	for(int i=0; i<n; i++){
	for(int j=0; j<n; j++){
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for(int i=0; i<n; i++){
		int cnt=0;
		for(int j=0; j<n; j++){
			if(v[i][j]!=b[i][j])
				cnt++;

			if(v[i][j]!=c[i][j])
				cnt++;

			if(v[i][j]!=d[i][j])
				cnt++;
			
			if(cnt==3 || cnt==1)
				ans += 1;
			
			if(cnt ==2)
				ans += 2;
			
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
