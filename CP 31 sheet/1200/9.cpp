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

    vector<int> a(n);
    map<int,int> mp(n);

    ll ans = LLONG_MAX;
    for(auto &it:a){
    	cin >> it;
    	mp[it]++;
    } 

    for(auto it:mp){
    	ans = min(ans,it.second);
    }

    


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}