#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const int N = 200005, K = 18;
int st[N][K];

void build(const vector<int>& a){
    int n = a.size();
    for(int i=0; i<n; i++) st[i][0] = a[i];

    for(int j=1; j<K; j++)
        for(int i=0; i+(1<<j)<=n; i++)
            st[i][j] = min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
}

int query(int L, int R){
    int j = __lg(R-L+1);
    return min(st[L][j], st[R-(1<<j)+1][j]);
}

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> x(n);
    for(auto &it:x) cin >> it;

    build(x);
    while(q--){
        int a, b;
        cin >> a >> b;
        
        cout << query(a-1, b-1) << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
