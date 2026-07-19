#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

const int INF = 2e9;
const int M = 1 << 21;

int mn[M], mx[M];
int c[25];
bool b[M];
int S;

int lv(int i){
    return __lg(S/i);
}

void p(int i){
    mn[i] = min(mn[2*i], mn[2*i+1]);
    mx[i] = max(mx[2*i], mx[2*i+1]);
}

int f(){
    for(int d=24; d>=1; d--)
        if(c[d]>0) return 1<<(d-1);
    return 0;
}

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    S = 1;
    while(S < n) S *= 2;

    for(int i=0; i<2*S; i++) mn[i] = mx[i] = INF;
    for(int i=0; i<n; i++) mn[S+i] = mx[S+i] = a[i];

    for(int i=0; i<25; i++) c[i] = 0;

    for(int i=S-1; i>=1; i--){
        p(i);
        b[i] = mx[2*i] > mn[2*i+1];
        if(b[i]) c[lv(i)]++;
    }

    cout << f();

    while(q--){
        int idx, x;
        cin >> idx >> x;

        int u = S + idx;
        mn[u] = mx[u] = x;

        for(u/=2; u>=1; u/=2){
            p(u);
            bool nb = mx[2*u] > mn[2*u+1];
            if(nb != b[u]){
                c[lv(u)] += nb ? 1 : -1;
                b[u] = nb;
            }
        }

        cout << " " << f();
    }

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