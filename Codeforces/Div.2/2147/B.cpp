/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - Exponential in worst case (backtracking), but works for reasonable n
    SC    - O(2n)
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
    int n;
    cin >> n;

    for(int i=n; i>0; i--){
        cout << i << " ";
    }

    cout << n << " ";

    for(int i=1; i<n; i++){
        cout << i << " ";
    }

    cout << endl;
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
