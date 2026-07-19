#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> adj(n+1);
    for(int i = 2; i<=n; i++){
        int p; 
        cin >> p;
        adj[p].pb(i);
    }

    vector<int> dep(n+1, 0);

    vector<int> ord;
    vector<int> stk = {1};

    while(!stk.empty()){
        int v = stk.back(); 
        stk.pop_back();
        ord.pb(v);
        for(int c:adj[v]){
            stk.pb(c);
        }
    }
    reverse(ord.begin(), ord.end());

    for(int v:ord){
        for(int c:adj[v]){
            dep[v] = max(dep[v], dep[c]+1);
        }
    }

    ll ans = n;

    for(int v=1; v<=n; v++){
        if(adj[v].size() < 2) continue;

        int max1 = -1;
        int max2 = -1;
        for(int c:adj[v]){
            int d = dep[c];
            if(d >= max1){ 
                max2 = max1; 
                max1 = d; 
            }
            else if(d > max2){ 
                max2 = d; 
            }
        }
        ans += max2+1;
    }

    cout << ans << endl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}