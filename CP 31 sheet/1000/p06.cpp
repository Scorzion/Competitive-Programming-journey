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

int nCr(int n, int r){
    double sum = 1;
    for(int i=1; i<=r; i++){
        sum = sum*(n-r+i)/i;
    }
    return (int)sum;
}

void solve(){
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(n);
    for(auto &it : a) cin >> it;

    vector<int> p;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(a[i] <= q) cnt++;
        else{
            if(cnt >= k) p.pb(cnt);
            cnt = 0;
        }
    }

    if(cnt >= k) p.pb(cnt);

    if(p.size() == 0){
        cout << 0 << endl;
        return;
    }

    ll ans = 0;

    for(int i = 0; i < p.size(); i++){
        ll L = p[i] - k + 1;
        ans += L * (L + 1) / 2;
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
