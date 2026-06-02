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
    ll n, k;
    cin >> n >> k;

    vector<ll>div;
    
    for(ll i=1; i*i<=n; i++) {
        if (n % i == 0) {
            
            if(i<=k) div.pb(i);

            if(n/i != i && n/i<=k){
            	div.pb(n/i);
            }
        }
    }

    sort(div.begin(),div.end());
    cout << n/div[div.size()-1] << endl;
    

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