/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cin >> v[i][j];
    	}
    }

    int ops = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int ni = n - i - 1;
            int nj = n - j - 1;

            if(i>ni || (i==ni && j>=nj)) continue;

            if(v[i][j] != v[ni][nj]) ops++;
        }
    }

    if(k>=ops){
    	k-=ops;
        if(k%2==0 || n%2==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else{
    	cout << "NO" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}