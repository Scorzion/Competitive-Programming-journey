#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Edge { int to; int w; };
const int MAXN = 300000 + 5;
const int LOG = 20;

int N, M;
vector<Edge> g[MAXN];
int up[LOG][MAXN], depthv[MAXN];
ll distRoot[MAXN];

void dfs(int v, int p){
    up[0][v] = p;
    for (auto e: g[v]){
        if (e.to == p) continue;
        depthv[e.to] = depthv[v] + 1;
        distRoot[e.to] = distRoot[v] + e.w;
        dfs(e.to, v);
    }
}

int lca(int a, int b){
    if (depthv[a] < depthv[b]) swap(a,b);
    int d = depthv[a] - depthv[b];
    for (int k=0;k<LOG;k++) if (d&(1<<k)) a = up[k][a];
    if (a==b) return a;
    for (int k=LOG-1;k>=0;k--){
        if (up[k][a] != up[k][b]){
            a = up[k][a];
            b = up[k][b];
        }
    }
    return up[0][a];
}

inline ll dist(int a, int b){
    int c = lca(a,b);
    return distRoot[a] + distRoot[b] - 2*distRoot[c];
}

struct Node {
    bool empty;
    int a, b; // endpoints
    ll d;     // dist(a,b)
};

Node make_empty(){ return {true, 0, 0, 0}; }
Node make_single(int v){ return {false, v, v, 0}; }

Node mergeNode(const Node& L, const Node& R){
    if (L.empty) return R;
    if (R.empty) return L;
    // candidates among {La, Lb, Ra, Rb}
    int cand[4] = {L.a, L.b, R.a, R.b};
    ll best = - (1LL<<62);
    int ba = cand[0], bb = cand[0];
    for (int i=0;i<4;i++){
        for (int j=i+1;j<4;j++){
            ll w = dist(cand[i], cand[j]);
            if (w > best){
                best = w; ba = cand[i]; bb = cand[j];
            }
        }
    }
    return {false, ba, bb, best};
}

struct SegTree {
    int n;
    vector<Node> st;
    SegTree(int n=0){init(n);}
    void init(int n_){
        n = 1;
        while (n < n_) n <<= 1;
        st.assign(2*n, make_empty());
    }
    void pointSet(int pos, Node val){
        int p = pos + n - 1;
        st[p] = val;
        for (p >>= 1; p; p >>= 1){
            st[p] = mergeNode(st[p<<1], st[p<<1|1]);
        }
    }
    Node query(int l, int r){
        Node L = make_empty(), R = make_empty();
        int a = l + n - 1, b = r + n - 1;
        while (a <= b){
            if (a&1) { L = mergeNode(L, st[a]); a++; }
            if (!(b&1)) { R = mergeNode(st[b], R); b--; }
            a >>= 1; b >>= 1;
        }
        return mergeNode(L, R);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    if(!(cin >> N)) return 0;
    for (int i=1;i<=N;i++) g[i].clear();

    for (int i=0;i<N-1;i++){
        int u,v,w; cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    // Root at 1
    depthv[1]=0; distRoot[1]=0;
    dfs(1,1);
    for (int k=1;k<LOG;k++){
        for (int v=1; v<=N; v++){
            up[k][v] = up[k-1][ up[k-1][v] ];
        }
    }

    cin >> M;
    SegTree st(M);
    int sz = 0;
    long long last_ans = 0;

    for (int i=0;i<M;i++){
        int type; cin >> type;
        if (type == 1){
            long long x; cin >> x;
            int xx = int( ((x ^ llabs(last_ans)) % N) + 1 );
            st.pointSet(++sz, make_single(xx));
        } else if (type == 2){
            if (sz > 0){
                st.pointSet(sz, make_empty());
                --sz;
            }
        } else { // type 3
            long long l, r, x; cin >> l >> r >> x;
            if (sz == 0){
                // No elements — but per statement, this case won't be asked.
                cout << 0 << '\n';
                last_ans = 0;
                continue;
            }
            int llq = int( ((l ^ llabs(last_ans)) % sz) + 1 );
            int rrq = int( ((r ^ llabs(last_ans)) % sz) + 1 );
            if (llq > rrq) swap(llq, rrq);
            int xx = int( ((x ^ llabs(last_ans)) % N) + 1 );

            Node seg = st.query(llq, rrq);
            // seg is guaranteed non-empty because llq..rrq within current sz
            ll ans = max( dist(xx, seg.a), dist(xx, seg.b) );
            cout << ans << '\n';
            last_ans = ans;
        }
    }
    return 0;
}
