#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    map<ll,ll> cnt;

    for(int i=0; i<n; i++){
        ll x = a[i];
        ll pos = 0;
        while(x){
            ll digit = x%k;
            if(digit>1){
                cout << "NO" << endl;
                return;
            }

            cnt[pos] += digit;

            if(cnt[pos]>1){
                cout << "NO" << endl;
                return;
            }

            x /= k;
            pos++;
        }
    }

    cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}