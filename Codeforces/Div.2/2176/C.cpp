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
#include <numeric>
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
    vector<ll> o,e;
    for(auto &it:a){
        cin >> it;

        if(it & 1) o.pb(it);
        else e.pb(it);
    }

    if(e.size()==n){
        for(ll i=0; i<n; i++) cout << 0 << " ";
        cout << endl;
        return;
    }

    sort(o.begin(),o.end());
    sort(e.begin(),e.end());

    if(o.size()==n){
        for(ll i=0; i<n; i++){
            if(i & 1) cout << 0  << " ";
            else cout << o.back() << " ";
        }
        cout << endl;
        return;
    }

    ll score = o.back();
    
    vector<ll> ans(n);
    ans[0] = score;

    for(int i=1; i<n; i++){
        if(e.size()==0){
            ans[i] = ans[i-2];
        }
        else{
            ans[i] = ans[i-1] + e.back();
            e.pop_back();
        }
    }

    if(accumulate(a.begin(),a.end(),0LL) & 1 ^ 1){
        ans[n-1] = 0;
    }

    for(auto it:ans){
        cout << it << " ";
    }
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
