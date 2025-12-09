#include <bits/stdc++.h>
using namespace std;

static const int INF = 1e9;
static const int MAXN = 1000000 + 5;
static const int LOG  = 20;

struct FastScanner {
    static const int BUFSIZE = 1 << 20;
    int idx, size; char buf[BUFSIZE];
    FastScanner(): idx(0), size(0) {}
    inline char gc() {
        if (idx >= size) {
            size = (int)fread(buf, 1, BUFSIZE, stdin);
            idx = 0;
            if (size == 0) return 0;
        }
        return buf[idx++];
    }
    template<class T>
    bool readInt(T &out) {
        char c; T sgn = 1; T x = 0;
        c = gc(); if (!c) return false;
        while (c != '-' && (c<'0' || c>'9')) { c = gc(); if (!c) return false; }
        if (c=='-') { sgn = -1; c = gc(); }
        for (; c>='0' && c<='9'; c = gc()) x = x*10 + (c - '0');
        out = x * sgn; return true;
    }
} in;

int head[MAXN];
int toArr[2*MAXN];
int nxArr[2*MAXN];
int ecnt = 0;
inline void add_edge(int u, int v) {
    toArr[++ecnt] = v; nxArr[ecnt] = head[u]; head[u] = ecnt;
    toArr[++ecnt] = u; nxArr[ecnt] = head[v]; head[v] = ecnt;
}

int N, Q;
int color[MAXN];
int distW[MAXN];
int depthArr[MAXN];
int up[LOG][MAXN];
int minUp[LOG][MAXN];
int parent0[MAXN];

void bfsWhite() {
    deque<int> dq;
    for (int i = 1; i <= N; ++i) {
        if (color[i]) { distW[i] = 0; dq.push_back(i); }
        else distW[i] = INF;
    }
    while (!dq.empty()) {
        int u = dq.front(); dq.pop_front();
        for (int e = head[u]; e; e = nxArr[e]) {
            int v = toArr[e];
            if (distW[v] > distW[u] + 1) {
                distW[v] = distW[u] + 1;
                dq.push_back(v);
            }
        }
    }
}

void bfsRoot(int root = 1) {
    queue<int> q;
    depthArr[root] = 0;
    parent0[root] = 0;
    q.push(root);
    vector<char> vis(N+1, 0);
    vis[root] = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int e = head[u]; e; e = nxArr[e]) {
            int v = toArr[e];
            if (!vis[v]) {
                vis[v] = 1;
                parent0[v] = u;
                depthArr[v]  = depthArr[u] + 1;
                q.push(v);
            }
        }
    }
}

void buildLifts() {
    up[0][0] = 0;
    minUp[0][0] = INF;
    for (int v = 1; v <= N; ++v) {
        up[0][v] = parent0[v];
        int p = parent0[v];
        minUp[0][v] = min(distW[v], (p? distW[p]: INF));
    }
    for (int k = 1; k < LOG; ++k) {
        up[k][0] = 0;
        minUp[k][0] = INF;
        for (int v = 1; v <= N; ++v) {
            int mid = up[k-1][v];
            up[k][v] = up[k-1][mid];
            minUp[k][v] = min(minUp[k-1][v], minUp[k-1][mid]);
        }
    }
}

int lca(int a, int b) {
    if (depthArr[a] < depthArr[b]) swap(a, b);
    int diff = depthArr[a] - depthArr[b];
    for (int k = 0; k < LOG; ++k) if (diff & (1<<k)) a = up[k][a];
    if (a == b) return a;
    for (int k = LOG-1; k >= 0; --k) {
        if (up[k][a] != up[k][b]) {
            a = up[k][a];
            b = up[k][b];
        }
    }
    return up[0][a];
}

int minUpPath(int u, int steps) {
    int res = INF;
    for (int k = 0; k < LOG; ++k) {
        if (steps & (1<<k)) {
            res = min(res, minUp[k][u]);
            u = up[k][u];
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!in.readInt(N)) return 0;
    in.readInt(Q);
    for (int i = 1; i <= N; ++i) {
        int x; in.readInt(x);
        color[i] = x;
        head[i] = 0;
    }
    for (int i = 0; i < N-1; ++i) {
        int a,b; in.readInt(a); in.readInt(b);
        add_edge(a,b);
    }

    bfsWhite();
    bfsRoot(1);
    buildLifts();

    string out;
    out.reserve(Q * 3);
    for (int i = 0; i < Q; ++i) {
        int u, v; in.readInt(u); in.readInt(v);
        int w = lca(u, v);
        int ans = distW[w];
        ans = min(ans, minUpPath(u, depthArr[u]-depthArr[w]));
        ans = min(ans, minUpPath(v, depthArr[v]-depthArr[w]));
        out.append(to_string(ans));
        out.push_back('\n');
    }
    cout << out;
    return 0;
}
