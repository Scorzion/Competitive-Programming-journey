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

void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
}

typedef long long ll;

struct dsu {
    int n;
    vector<int> p, r;
    dsu(int n = 0): n(n), p(n), r(n, 0) { iota(p.begin(), p.end(), 0); }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    void unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return;
        if (r[a] < r[b]) swap(a, b);
        p[b] = a;
        if (r[a] == r[b]) r[a]++;
    }
};

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    vector<vector<int>> id(n, vector<int>(m, -1));
    vector<int> digit;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (g[i][j] != '.') {
                id[i][j] = cnt++;
                digit.push_back(g[i][j] - '0');
            }
        }
    }

    dsu d(cnt);

    auto unite_palindrome = [&](const vector<int>& cells){
        int l = 0, r = (int)cells.size() - 1;
        while(l < r){
            d.unite(cells[l], cells[r]);
            l++, r--;
        }
    };


    for(int i = 0; i < n; i++){
        int j = 0;
        while(j < m){
            while (j < m && g[i][j] == '.') j++;
            if (j == m) break;
            int k = j;
            vector<int> cells;
            while(k < m && g[i][k] != '.'){
                cells.push_back(id[i][k]);
                k++;
            }
            unite_palindrome(cells);
            j = k;
        }
    }

    for(int j = 0; j < m; j++){
        int i = 0;
        while(i < n) {
            while(i < n && g[i][j] == '.') i++;
            if (i == n) break;
            int k = i;
            vector<int> cells;
            while(k < n && g[k][j] != '.'){
                cells.push_back(id[k][j]);
                k++;
            }
            unite_palindrome(cells);
            i = k;
        }
    }

    vector<array<int, 10>> freq(cnt);
    for(int i = 0; i < cnt; i++) freq[i].fill(0);

    for(int i = 0; i < cnt; i++){
        int root = d.find(i);
        freq[root][digit[i]]++;
    }

    vector<int> val(cnt, 0);
    for(int i = 0; i < cnt; i++){
        if(d.find(i) != i) continue;
        int total = accumulate(freq[i].begin(), freq[i].end(), 0);
        int need = (total - 1) / 2, csum = 0;
        for(int dig = 0; dig < 10; dig++){
            csum += freq[i][dig];
            if(csum > need){
                val[i] = dig;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (g[i][j] == '.') cout << '.';
            else cout << val[d.find(id[i][j])];
        }
        cout << endl;
    }
}

int main() {
    init_code();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}

