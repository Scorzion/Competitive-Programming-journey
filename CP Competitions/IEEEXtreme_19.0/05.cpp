/**
    author: sourav sharma (@sneaky_typer)
    go for gold.
**/

/**
    tc    - 
    sc    - 
    logic - 
**/

#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"

struct dsu{
    int n;
    vector<int> p, r;
    dsu(int n=0): n(n), p(n+1), r(n+1,0) {
        iota(p.begin(), p.end(), 0);
    }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    bool unite(int a,int b){
        a = find(a); b = find(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }
};

struct edge{
    int u, v;
    ll w, r;
};

void solve(){
    int n, m;
    cin >> n >> m;

    vector<edge> edges(m);
    vector<vector<pair<int, pair<ll,ll>>>> adj(n+1);

    for(int i=0;i<m;i++){
        int u,v; ll w, r;
        cin >> u >> v >> w >> r;
        edges[i] = {u,v,w,r};
        adj[u].pb({v,{w,r}});
        adj[v].pb({u,{w,r}});
    }

    vector<int> ord(m);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&](int a, int b){
        if(edges[a].r != edges[b].r) return edges[a].r < edges[b].r;
        return a < b;
    });

    dsu d(n);
    ll bestmaxr = -1;
    for(int idx: ord){
        d.unite(edges[idx].u, edges[idx].v);
        if(d.find(1) == d.find(n)){
            bestmaxr = edges[idx].r;
            break;
        }
    }

    if(bestmaxr == -1){
        cout << -1 << endl;
        return;
    }

    const ll inf = (1ll<<62);
    vector<ll> dist(n+1, inf);
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;

    dist[1] = 0;
    pq.push({0,1});

    while(!pq.empty()){
        auto [d,u] = pq.top(); pq.pop();
        if(d != dist[u]) continue;
        if(u == n) break;
        for(auto &e : adj[u]){
            int v = e.first;
            ll w = e.second.first;
            ll r = e.second.second;
            if(r > bestmaxr) continue;
            if(dist[v] > d + w){
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    if(dist[n] == inf) cout << -1 << endl;
    else cout << bestmaxr << " " << dist[n] << endl;
}

int main(){
    init_code();
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
