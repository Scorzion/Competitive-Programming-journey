/**
    author: sourav sharma (@sneaky_typer)
    go for gold.
**/

/**
    tc    - o(n) per test case, overall o(sum of n)
    sc    - o(n) per test case for the diff array
    logic - greedy + sliding flip parity:
            sweep left to right keeping the current flip parity (0/1) from
            flips started earlier. if the i-th person is effectively sad
            after applying the current parity, we must start a flip at i
            (otherwise they can never be fixed later). schedule this flip
            to end at i+k using a difference array. if i+k > n when needed,
            it's impossible.
**/
 
#include <bits/stdc++.h>
using namespace std;

void init_code(){
#ifndef online_judge
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
    int n, k;
    string s;
    cin >> n >> k >> s;

    if(k > n){
        bool allh = true;
        for(char c : s) if(c != 'H'){ allh = false; break; }
        cout << (allh ? 0 : -1) << endl;
        return;
    }

    vector<int> end(n + 1, 0);
    int parity = 0;
    int ans = 0;

    for(int i = 0; i < n; ++i){
        parity ^= end[i];
        bool effish = ((s[i] == 'H') ^ (parity & 1));
        if(!effish){
            if(i + k > n){
                cout << -1 << endl;
                return;
            }
            ++ans;
            parity ^= 1;
            end[i + k] ^= 1;
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
