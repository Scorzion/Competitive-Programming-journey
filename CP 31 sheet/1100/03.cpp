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
    
    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    
    vector<pair<ll,ll>> b;
    for(int i=0; i<n; i++){
        b.pb({a[i],i});
    }
    
    sort(b.begin(),b.end());
    
    vector<ll> score(n);
    score[0] = b[0].first;
    for(int i=1; i<n; i++){
        score[i] = b[i].first + score[i-1];
    }
    
    vector<ll> check(n,0);
    for(int i=0; i<n-1; i++){
        if(score[i]>= b[i+1].first){
            check[i] = 1;
        }
    }

    
    for(int i=n-2; i>=0; i--){
        if(check[i]==1){
            check[i] += check[i+1];
        }
        
    }

    vector<ll> ans(n,0);

    for(int i=0; i<n; i++){
        ans[b[i].second] += i;
        if(i!=n-1){
            ans[b[i].second] += check[i];
        }
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
