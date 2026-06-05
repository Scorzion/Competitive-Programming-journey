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
    map<int,int> mp;

    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int l = 0;
    int r = n - 1;

    int mx = prev(mp.end())->first;
    int mn = mp.begin()->first;

    auto upd = [&](int x){
        mp[x]--;

        if(mp[x] == 0){
            mp.erase(x);
        }

        if(mp.size() == 0){
            return false;
        }

        mx = prev(mp.end())->first;
        mn = mp.begin()->first;

        return true;
    };

    bool fl = 1;
    bool fr = 1;

    while(l < r){
        fl = 1;
        fr = 1;

        if(a[l] == mx && a[l] == mn){
            fl = 0;
            l++;

            if(!upd(mx)){
                break;
            }
        }
        else if(a[l] == mx){
            fl = 0;
            l++;

            if(!upd(mx)){
                break;
            }
        }
        else if(a[l] == mn){
            fl = 0;
            l++;

            if(!upd(mn)){
                break;
            }
        }

        if(a[r] == mx && a[r] == mn){
            fr = 0;
            r--;

            if(!upd(mx)){
                break;
            }
        }
        else if(a[r] == mx){
            fr = 0;
            r--;

            if(!upd(mx)){
                break;
            }
        }
        else if(a[r] == mn){
            fr = 0;
            r--;

            if(!upd(mn)){
                break;
            }
        }

        if(fl && fr){
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}