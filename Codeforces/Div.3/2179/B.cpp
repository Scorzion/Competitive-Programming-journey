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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto &it:a) cin >> it;

    ll sum = 0;
    for(int i=0; i<n-1; i++) sum += abs(a[i] - a[i + 1]);

    ll ans = sum;
    ans = min(ans,sum-abs(a[0]-a[1]));
    ans = min(ans, sum-abs(a[n-1]-a[n-2]));

    for(int i=1; i<n-1; i++) {
        ll temp = sum;
        temp -= abs(a[i]-a[i-1]);
        temp -= abs(a[i]-a[i + 1]);
        temp += abs(a[i-1]-a[i+1]);
        ans = min(ans, temp);
    }

    cout << ans << endl;
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
