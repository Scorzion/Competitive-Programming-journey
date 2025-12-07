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

bool isPrime(ll n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i = 5; i <= n / i; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve(){
    ll x, k;
    cin >> x >> k;

    ll cnt = (ll)to_string(x).size();

    ll e = 0;
    ll multi = 1;

    for(int i = 0; i<k; i++){
        if(multi > LLONG_MAX/x){ 
            cout << "NO" << endl;
            return;
        }
        e += multi * x;

        ll next_multi = 1;
        for(int j = 0; j<cnt; j++){
            if(next_multi > LLONG_MAX/10){
                cout << "NO" << endl;
                return;
            }
            next_multi *= 10;
        }
        if(i!=k-1 && multi>LLONG_MAX/next_multi){
            cout << "NO" << endl;
            return;
        }
        multi *= next_multi;
    }

    if(isPrime(e)){
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
