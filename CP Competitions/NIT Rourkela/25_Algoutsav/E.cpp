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
    int n;
    cin >> n;

    vector<ll> a(2*n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        a[i+n] = a[i];
    }

    vector<ll> pre(2*n+1,0);
    for(int i=1; i<=2*n; i++){
        pre[i] = pre[i-1] ^ a[i];
    }

    vector<ll> all = pre;
    sort(all.begin(), all.end());
    all.erase(unique(all.begin(), all.end()), all.end());

    int m = all.size();
    vector<vector<int>> pos(m);

    for(int i=0; i<=2*n; i++){
        int id = lower_bound(all.begin(), all.end(), pre[i]) - all.begin();
        pos[id].pb(i);
    }

    int ans = 0;
    for(int i=0; i<m; i++){
        int l = 0;
        for(int r=0; r<(int)pos[i].size(); r++){
            while(pos[i][r] - pos[i][l] > n){
                l++;
            }
            ans = max(ans, pos[i][r] - pos[i][l]);
        }
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
