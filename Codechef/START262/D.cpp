#include <bits/stdc++.h>
using namespace std;

const int B = 20;
const int INF = INT_MAX;

int off[B + 1];
int fs[1 << 21], ls[1 << 21];

void rst(const vector<int>& a){
    for(int v : a){
        for(int b = 0; b < B; b++){
            int id = off[b] + (v >> b);
            fs[id] = INF;
            ls[id] = -1;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &v : a){
        cin >> v;
    }

    for(int i = 0; i < n; i++){
        for(int b = 0; b < B; b++){
            int id = off[b] + (a[i] >> b);
            fs[id] = min(fs[id], i);
            ls[id] = i;
        }
    }

    array<int, 4> r = {-1, -1, -1, -1};

    auto chk = [&](int j, int k) -> bool {
        int m = a[j] & a[k];
        int t = a[j] ^ a[k];
        int x = -1, y = -1;
        for(int b = 0; b < B; b++){
            if(!((m >> b) & 1)) continue;
            int id = off[b] + ((t >> b) ^ 1);
            if(x == -1 && fs[id] < j) x = fs[id];
            if(y == -1 && ls[id] > k) y = ls[id];
        }
        if(x == -1 || y == -1) return false;
        r = {x, j, k, y};
        return true;
    };

    bool f = false;
    for(int j = 1; j + 2 < n && !f; j++){
        for(int k = j + 1; k + 1 < n && !f; k++){
            f = chk(j, k);
        }
    }

    if(!f){
        cout << -1 << "\n";
    }else{
        cout << r[0] + 1 << " " << r[1] + 1 << " "
             << r[2] + 1 << " " << r[3] + 1 << "\n";
    }

    rst(a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    off[0] = 0;
    for(int b = 0; b < B; b++){
        off[b + 1] = off[b] + (1 << (B - b));
    }
    fill(fs, fs + (1 << 21), INF);
    fill(ls, ls + (1 << 21), -1);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}