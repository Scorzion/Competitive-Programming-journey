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
    int n;
    string s;
    cin >> n >> s;
    
    long long total = 1LL * n * (n + 1) / 2;
    long long sav = 0;
    
    multiset<int> avl;
    
    for (int minute = n; minute >= 1; minute--) {
        avl.insert(minute);
        
        if (s[minute-1] == '1') {

            while (avl.size() >= 3) {

                auto it = prev(avl.end());
                int large = *it;
                sav += large;
                
                avl.erase(it);
                
                avl.erase(avl.begin());
                avl.erase(avl.begin());
            }
        }
    }
    
    cout << total - sav << "\n";
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
