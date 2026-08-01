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

    vector<int> p(n);
    for (auto &it:p) cin >> it;

    vector<int> a, b;
    a.reserve(n);
    b.reserve(n);

    for(auto &v:p){
        auto it = lower_bound(all(a), v);

        if(it==a.end()){
            a.pb(v);
        }
        else{
            int w = *it;
            *it = v;

            auto it2 = lower_bound(all(b), w);
            if(it2 == b.end()){
                b.pb(w);
            }
            else{
                *it2 = w;
            }
        }
    }

    cout << (ll)(sz(a) + sz(b)) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}