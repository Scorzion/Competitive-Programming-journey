#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    vector<int> b = a;

    sort(all(b));

    map<int,int> mp;
    for(int i=0; i<n; i++)
    	mp[b[i]] = i;

    int cnt = 1;
    for(int i=0; i<n-1; i++)
    	if((mp[a[i+1]]-mp[a[i]])!=1) cnt++;


    cout << (cnt<=k? "YES" : "NO") << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}