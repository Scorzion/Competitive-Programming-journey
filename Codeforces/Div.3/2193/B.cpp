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

    vector<ll> p(n);
    for(auto &it:p) cin >> it;

    ll num = n;
    int strt = n;

    for(int i=0; i<n; i++){
        if(p[i] == num){
            num--;
        }
        else{
            strt = i;
            break;
        }
    }

    if(strt == n){
        for(auto it:p) cout << it << " ";
        cout << endl;
        return;
    }

    ll idx = -1;

    for(int i=n-1; i>=strt; i--){
        if(p[i] == num){
            idx = i;
            break;
        }
    }

    if(idx != -1){
        reverse(p.begin() + strt, p.begin() + idx + 1);
    }

    for(auto it: p) cout << it << " ";
    cout << endl;
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
