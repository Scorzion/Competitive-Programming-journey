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
    ull n;
    cin >> n;

    if((n & 1ULL) || ((n & (n - 1ULL)) == 0ULL)){
        cout << -1 << endl;
        return;
    }

    ull l = n & (~n + 1ULL); 
    ull a, b, c;

    if(l == 2ULL){
        a = n/2ULL - 1ULL;
        b = n/2ULL;
        c = n + 1ULL;
    }else{
        a = n/2ULL - l/2ULL;
        b = n/2ULL;
        c = n + l/2ULL;
    }

    cout << a << " " << b << " " << c << endl;
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
