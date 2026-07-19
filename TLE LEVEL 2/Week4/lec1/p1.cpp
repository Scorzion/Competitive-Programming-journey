#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, Q;
    cin >> n >> Q;

    vector<pair<int,int> a(n);
    vector<int> pre(32,0);
    for(int i=0; i<n; i++){
    	cin >> a[i].first;
        a[i].second = i;

        pre[__builtin_ctz(a[i].first)]++;
    }

    for(int i=1; i<32; i++){
        pre[i] += pre[i-1];
    }

    int mn = 33;
    while(Q--){
        int q;
        cin >> q;

        bool used = false;
        if(q>mn){
            for(int i=1; i<32; i++)
        }
    }


}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}