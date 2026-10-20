/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    ull a, b, c, d;
    cin >> a >> b >> c >> d;

    ull divc = (b/c - ((a-1)/c));
    ull divd = (b/d - ((a-1)/d));


    ull divcd = ((b/lcm(c,d)) - ((a-1)/lcm(c,d)));

    ull num = b - (a-1);
    ull all_div = divc + divd - divcd;
    cout << num - all_div << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
