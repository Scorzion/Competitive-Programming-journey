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

    vector<int> a(n), b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

    vector<int> temp=a;
    sort(temp.begin(),temp.end());
    for(int i=0; i<n; i++){
        if(temp[i]>b[i]){
            cout << -1 << endl;
            return;
        }
    }

    ll ans = 0;
    for(int i=0; i<n; i++){
        if(a[i]>b[i]){
            for(int j=i+1; j<n; j++){
                ans++;
                if(b[i] >= a[j]){
                    a.erase(a.begin()+j);
                    a.insert(a.begin()+i,0);
                    break;
                }
            }
        }
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