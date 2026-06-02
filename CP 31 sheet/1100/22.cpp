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

const ll mod = 1e9+7;

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
        exp >>= 1;
    }

    return result;
}

ll modInverse(ll b, ll m) {
    return power(b, m - 2, m);
}

ll modDivide(ll a, ll b, ll m) {

    if (b == 0 || __gcd(b, m) != 1)
        return -1;

    ll inv = modInverse(b, m);
    return (a % m * inv % m) % m;
}

void solve(){
    int n;
    cin >> n;

    ll sum = 0LL;
    ll val = ((((n % mod) * ((n + 1) % mod)) % mod) * ((4LL * n - 1LL + mod) % mod)) % mod;
    val = modDivide(val,6,mod);
    sum = (sum +val)%mod;


    // cout << val << endl;
    // cout << ((2022ll%mod)*(sum%mod))%mod << endl;

    ll output = n%mod;
    output = (output*((n+1)%mod))%mod;
    ll three = (4LL*(n) - 1LL)%mod;

    output = (output*three)%mod;

    output = modDivide(output, 6, mod);
    output = (output*2022LL)%mod;
    cout << output << "\n";
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