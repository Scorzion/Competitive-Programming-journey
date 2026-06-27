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

    vector<int> ans;
    int xr = 0;

    for(int i=0;i<n-3;i++){
        ans.push_back(i);
        xr ^= i;
    }

    int A = 1<<29;
    int B = 1<<30;
    int C = xr ^ A ^ B;

    ans.push_back(A);
    ans.push_back(B);
    ans.push_back(C);

    for(auto x:ans) cout << x << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}