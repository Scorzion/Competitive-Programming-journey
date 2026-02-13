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
    cin >> n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    unordered_map<int,vector<int>> pos;

    for(int i = 0; i < n; i++)
        pos[a[i]].push_back(i);

    ll ans = 0;

    for(int x=1; x*x<=2*n; x++){
        for(int y=x; x*y<=2*n; y++){
            if(!pos.count(x) || !pos.count(y)) continue;

            if(x==y){
                auto &v = pos[x];
                for(int i=0; i<v.size(); i++){
                    for(int j=i+1; j<v.size(); j++){
                        int idx1 = v[i], idx2 = v[j];
                        if(a[idx1]*a[idx2]==b[idx1]+b[idx2])
                            ans++;
                    }
                }
            }
            else{
                auto &v1 = pos[x];
                auto &v2 = pos[y];
                for(int i:v1){
                    for(int j:v2){
                        if(i<j && a[i]*a[j]==b[i]+b[j])
                            ans++;
                        if(j<i && a[i]*a[j]==b[i]+b[j])
                            ans++;
                    }
                }
            }
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
