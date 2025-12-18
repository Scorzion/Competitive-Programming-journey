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

static const int B = 19;
static const int MAXM = 1 << B;

long long cnt[MAXM], sumW[MAXM];
long long dpCnt[MAXM], dpSum[MAXM];

void solve(){
	int n;
    cin >> n;

    vector<int> A(n);
    vector<ll> W(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> W[i];

    vector<vector<ll>> buck(MAXM);
    for (int i = 0; i < n; i++) {
        buck[A[i]].push_back(W[i]);
    }

    ll ans = 0;

    for (int a = 0; a < MAXM; a++) {
        if (buck[a].empty()) continue;


        memcpy(dpCnt, cnt, sizeof(cnt));
        memcpy(dpSum, sumW, sizeof(sumW));

        for (int bit = 0; bit < B; bit++) {
            for (int mask = 0; mask < MAXM; mask++) {
                if (mask & (1 << bit)) {
                    dpCnt[mask] += dpCnt[mask ^ (1 << bit)];
                    dpSum[mask] += dpSum[mask ^ (1 << bit)];
                }
            }
        }

        int comp = ((1 << B) - 1) ^ a;

        for (ll w : buck[a]) {
            ans += dpCnt[comp] * w - dpSum[comp];
        }

        for (ll w : buck[a]) {
            cnt[a]++;
            sumW[a] += w;
        }
    }

    cout << ans << endl;
 
}


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
 
    return 0;
}
