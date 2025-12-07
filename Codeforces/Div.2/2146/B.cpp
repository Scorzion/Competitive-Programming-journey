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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> sets(n);
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;
        sets[i].resize(s);
        for(int j = 0; j < s; j++){
            cin >> sets[i][j];
        }
    }

    // pos[x] = list of sets containing element x
    vector<vector<int>> pos(m + 1);
    for(int i = 0; i < n; i++){
        for(int x : sets[i]){
            pos[x].push_back(i);
        }
    }

    bool check = 0;
    int cnt_two = 0;

    for(int x = 1; x <= m; x++){
        int c = pos[x].size();
        if (c >= 3){
            check = 1; // Already ≥3 choices possible
            break;
        }
        else if(c == 2){
            cnt_two++;
        }
    }

    if(check || cnt_two >= 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
