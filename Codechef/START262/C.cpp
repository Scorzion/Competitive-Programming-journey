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

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    int start = 0;
    for(int i=0; i<n-1; i++) start += (a[i]==a[i+1]);

    int l = INT_MIN;   
    int ans = 0;    

    for(int j=0; j<n; j++){
        int left = 0;
        if(j>0){
            left = (a[j-1]==a[j]+1)-(a[j-1]==a[j]);
        }
        l = max(l, left);

        int right = 0;
        if(j<n-1){
            right = (a[j]+1==a[j+1])-(a[j]==a[j+1]);
        }
        ans = max(ans, l+right);
    }

    cout << start+ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}