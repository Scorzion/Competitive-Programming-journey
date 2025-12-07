/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O(n * m) per test case
    SC    - O(m)
    Logic - Dynamic Programming with quadratic gap cost.
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
    int n, m;
    string a, b;
    if(!(cin >> n)) return;
    cin >> a;
    cin >> m;
    cin >> b;
    ll MATCH, MISMATCH, GAP;
    cin >> MATCH >> MISMATCH >> GAP;

    auto score = [&](char x, char y)->ll{
        return (x == y) ? MATCH : MISMATCH;
    };

    const ll NEG_INF = (ll)-4e18;

    vector<ll> M_prev(m + 1, NEG_INF);
    vector<ll> X_prev(m + 1, NEG_INF);
    vector<ll> Y_prev(m + 1, NEG_INF);
    vector<int> LY_prev(m + 1, 0);

    M_prev[0] = 0;

    {
        vector<ll> X_cur(m + 1, NEG_INF);
        ll x_run = NEG_INF;
        ll lx = 0;
        for(int j = 1; j <= m; ++j){
            ll start_new = M_prev[j - 1] + GAP;
            ll extend = (x_run == NEG_INF) ? NEG_INF : (x_run + (2*lx + 1) * GAP);
            if(start_new >= extend){
                x_run = start_new; lx = 1;
            }else{
                x_run = extend; ++lx;
            }
            X_cur[j] = x_run;
        }
        X_prev.swap(X_cur);
    }

    for(int i = 1; i <= n; ++i){
        vector<ll> Y_new(m + 1, NEG_INF);
        vector<int> LY_new(m + 1, 0);
        for(int j = 0; j <= m; ++j){
            ll start_new = M_prev[j] + GAP;
            ll extend = (Y_prev[j] == NEG_INF) ? NEG_INF : (Y_prev[j] + (2LL * LY_prev[j] + 1) * GAP);
            if(start_new >= extend){
                Y_new[j] = start_new; LY_new[j] = 1;
            }else{
                Y_new[j] = extend; LY_new[j] = LY_prev[j] + 1;
            }
        }

        vector<ll> M_cur(m + 1, NEG_INF);
        vector<ll> X_cur(m + 1, NEG_INF);

        ll x_run = NEG_INF;
        ll lx = 0;

        for(int j = 1; j <= m; ++j){
            ll start_new = M_cur[j - 1] + GAP;
            ll extend = (x_run == NEG_INF) ? NEG_INF : (x_run + (2*lx + 1) * GAP);
            if(start_new >= extend){
                x_run = start_new; lx = 1;
            }else{
                x_run = extend; ++lx;
            }
            X_cur[j] = x_run;

            ll best_prev = max({M_prev[j - 1], X_prev[j - 1], Y_prev[j - 1]});
            M_cur[j] = (best_prev == NEG_INF) ? NEG_INF : (best_prev + score(a[i - 1], b[j - 1]));
        }

        M_prev.swap(M_cur);
        X_prev.swap(X_cur);
        Y_prev.swap(Y_new);
        LY_prev.swap(LY_new);
    }

    ll ans = max({M_prev[m], X_prev[m], Y_prev[m]});
    cout << ans << '\n';
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


        solve();
    
    return 0;
}
