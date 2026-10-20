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

int isPossible(ll x, ll y, ll z){
    if(y%2 == z%2)
        return 1;
    return 0;

}

// tc - O(1)
// sc - O(1)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;

    int ans[3] = {0, 0,0};
    ans[0]= isPossible(a, b, c);
    ans[1]= isPossible(b, c, a);
    ans[2]= isPossible(c, a, b);

    for(auto it: ans)
        cout << it << " ";
    cout << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
