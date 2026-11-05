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

    int L = 32-__builtin_clz(n), h = 1<<(L-1);
    vector<int> d(n+1, 0);
    int m = 0;
    for(int i=1; i<=n; i++){
        if(i>=h) d[i] = 1;
        m ^= d[i] ? 2*i : i;
    }

    vector<int> pos(1<<(L+1), 0);
    for(int i=1; i<=n; i++) pos[i^(2*i)] = i;

    for(int T=(1<<(L+1))-1; T>=(1<<(L+1))-2; T--){
        int D = m^T;
        if(D==0){
            for(int i=1; i<=n; i++) cout << d[i] << " ";
            cout << endl;
            return;
        }
        for(int x=1; x<=n; x++){
            int y = D^x^(2*x);
            if(y==0){
                d[x]^=1;
                for(int i=1; i<=n; i++) cout << d[i] << " ";
                cout << endl;
                return;
            }
            if(y<sz(pos) && pos[y]){
                d[x]^=1, d[pos[y]]^=1;
                for(int i=1; i<=n; i++) cout << d[i] << " ";
                cout << endl;
                return;
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}