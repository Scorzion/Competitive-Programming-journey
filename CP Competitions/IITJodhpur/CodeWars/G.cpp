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
#include <climits>
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
    vector<ll> a(6);
    for (int i=0; i<6; i++) cin >> a[i];

    int n;
    cin >> n;
    
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int m = a.size();

    vector<ll> b(n);
    for(int i=0; i<n; i++) cin >> b[i];

    vector<pair<ll,int>> v;
    v.reserve(m*n);

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            v.emplace_back(b[i]-a[j],i);
        }
    }

    sort(v.begin(),v.end());

    vector<int> cnt(n,0);
    int unf = 0;
    int l = 0;
    ll ans = 2e18; 

    for(int r=0; r<(int)v.size(); r++) {
        if(cnt[v[r].second] == 0){
            unf++;
        }
        cnt[v[r].second]++;

        while(unf == n){
            ans = min(ans,v[r].first-v[l].first);
            
            cnt[v[l].second]--;
            if(cnt[v[l].second] == 0){
                unf--;
            }
            l++;
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
