/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - 
    SC    - 
    Logic -
**/
 
#include <bits/stdc++.h>
#include <cstdlib>
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
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, 0));

    v[0][(n-1)/2] = 1;

    int k = 1;
    int r = 0;
    int c = (n-1)/2;
    int t = n * n - 1;

    while(t--){
        int rh = (r - 1 + n) % n;   
        int ch = (c + 1) % n;

        if(v[rh][ch] == 0){
            r = rh;
            c = ch;
        }
        else{
            r = (r + 1) % n;
        }

        v[r][c] = ++k;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
