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
    ll n, x, y;
    cin >> n >> x >> y;

    ll lcm = (x*y)/__gcd(x,y);
   	ll cntx = n/x;
   	ll cnty = n/y;
   	ll cntxy = n/lcm;

   	cntx -= cntxy;
   	cnty -= cntxy;


   	ll ans = 0LL;
   	ans += (cntx)*(2LL*n-cntx+1LL);
   	ans -= cnty*(cnty+1LL);

   	ans /= 2LL;
   	cout << ans << endl;
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