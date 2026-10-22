#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<int> a(n);
    multiset<int> s;

    for(auto &it:a){
        cin >> it;
    }

    int w = a[p-1];
    int c = 0;


    if(p>k){
        for(int i=0; i<k; i++){
            s.insert(a[i]);
        }
        for(int i=k; i<p; i++){
            c += *s.begin();
            s.erase(s.begin());
            if(i<p-1) s.insert(a[i]);   
        }
    }

    if(c+w>m){
        cout << 0 << endl;
        return;
    }

    vector<int> o;
    for(int i=0; i<n; i++){
        if(i != p-1) o.push_back(a[i]);
    }
    sort(all(o));

    int S = 0;
    for(int i=0; i<n-k; i++){
        S += o[i];
    }

    int ans = 1+(m-c-w)/(w+S);
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