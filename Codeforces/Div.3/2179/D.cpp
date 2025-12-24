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
    int n; cin >> n;
    
    int N = 1 << n;
    vector<int> p;

    for (int k = n - 1; k >= 0; --k) {
        int L = 1 << k;
        int R = 1 << (k + 1);
        for (int x = L; x < R; ++x)
            p.pb(x);
    }

    for (int i = 0; i < N; ++i) {
        cout << p[i] << (i + 1 < N ? ' ' : '\n');
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
