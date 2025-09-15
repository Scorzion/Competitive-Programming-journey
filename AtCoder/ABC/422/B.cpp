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
    int h, w;
    cin >> h >> w;

    h += 2;
    w += 2;
    vector<vector<char>> a(h, vector<char>(w, '.'));

    for(int i=1; i<h-1; i++){
        string s;
        cin >> s;
        for(int j=1; j<w-1; j++){
            a[i][j] = s[j-1];
        }
    }

    for(int i=1; i<h-1; i++){
        for(int j=1; j<w-1; j++){
            if(a[i][j]=='#'){
                bool flag = (a[i][j+1]=='#' || a[i+1][j]=='#' || a[i-1][j]=='#' || a[i][j-1]=='#');
                if(!flag){
                    cout << i << " " << j << endl;
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
