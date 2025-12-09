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

ll mod_inv(ll a, ll p){
    a %= p;
    if (a < 0) a += p;
    ll b = p, u = 1, v = 0;
    while(b){
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    if (a != 1) return -1; 
    if (u < 0) u += p;
    return u;
}

pair<ll,ll> add_points(ll a,ll b,ll p,ll x1,ll y1,ll x2,ll y2,bool &is_infinity){
    
    if(x1 == x2 && (y1 + y2) % p == 0){
        is_infinity = true;
        return {0, 0};
    }

    ll lambda, num, den;

    if(x1 == x2 && y1 == y2){
        if (y1 % p == 0) {
            is_infinity = true;
            return {0, 0};
        }
        num = (3 * x1 % p * x1 % p + a) % p;
        den = (2 * y1) % p;
    }else{
        num = (y2 - y1) % p;
        den = (x2 - x1) % p;
    }

    if(den < 0) den += p;
    if(num < 0) num += p;

    ll inv = mod_inv(den, p);
    if(inv == -1){
        is_infinity = true;
        return {0, 0};
    }

    lambda = (num * inv) % p;
    ll x3 = (lambda * lambda - x1 - x2) % p;
    ll y3 = (lambda * (x1 - x3) - y1) % p;

    if (x3 < 0) x3 += p;
    if (y3 < 0) y3 += p;

    return {x3, y3};
}

void solve(){
    ll a, b, p, x1, y1, x2, y2;
    cin >> a >> b >> p >> x1 >> y1 >> x2 >> y2;

    bool inf = false;
    auto [x3, y3] = add_points(a, b, p, x1, y1, x2, y2, inf);

    if (inf) cout << "POINT_AT_INFINITY" << endl;
    else cout << x3 << " " << y3 << endl;
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
