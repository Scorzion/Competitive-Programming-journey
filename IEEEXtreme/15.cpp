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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, k;
    if (!(cin >> N >> k)) return 0;

    vector<int> C(N, 0);
    for (int i = 1; i <= N - 1; ++i) cin >> C[i];

    int Q; cin >> Q;


    vector<char> reach(k + 1, 0);
    reach[0] = 1;


    vector<int> coins;
    if(N > 1){
 
        vector<char> seen(2001, 0);
        for(int i = 1; i <= N - 1; ++i){
            int coin = 2 * C[i];
            if (coin <= 2000 && !seen[coin]){
                seen[coin] = 1;
                coins.push_back(coin);
            }
        }

        for(int coin : coins){
            for(int s = coin; s <= k; ++s)
                if (reach[s - coin]) reach[s] = 1;
        }
    }

    auto minCost = [&](int A, int B) -> int{
        if (A == B) {
            if (A == 0) return 0;
            return 2 * C[A];
        } else {
            if (A == 0) return C[B];
            if (B == 0) return C[A];
            return C[A] + C[B];
        }
    };

    for (int qi = 0; qi < Q; ++qi){
        int A, B; cin >> A >> B;
        int L = minCost(A, B);
        int R = k - L;
        if (R >= 0 && reach[R]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

