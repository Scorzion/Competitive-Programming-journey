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
    ull n, k, b, s;
    cin >> n >> k >> b >> s;

    if(s==0 && b==0){
        for(int i=0; i<n; i++) cout << 0 << " ";
        cout << endl;
        return;
    }

    if((k*b)<=s && s<= ((k*b) +(k-1)*n)){
        vector<ull> ans(n,0);
        if(b>n){
            for(ull i=0; i<n; i++) ans[i] += (b/n)*k;
            for(ull i=0; i<(b%n); i++) ans[i] += k;
        }
        else{
            for(ull i=0; i<b; i++) ans[i] += k;
        }

        ull net = s - (k*b);
        if(k>1){
        ull last = net/(k-1);
        for(ull i=0; i<last; i++) ans[i] += k-1;
        if(last!=n) ans[last] += (net%(k-1));
        } 
        
        for(auto it:ans) cout << it << " ";
        cout << endl; 
    }
    else{
        cout << -1 << endl;
    }

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
