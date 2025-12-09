#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    int N, K;
    if(!(cin >> N >> K)) return;
    const int BITS = 10;
    int basis[BITS] = {0};

    auto insert_vector = [&](int x){
        for(int b = BITS - 1; b >= 0; --b){
            if(((x >> b) & 1) == 0) continue;
            if(!basis[b]){ basis[b] = x; return; }
            x ^= basis[b];
        }
    };

    for(int i = 0; i < N; ++i){
        int a; cin >> a;
        insert_vector(a);
    }

    vector<int> B;
    for(int b = 0; b < BITS; ++b) if(basis[b]) B.pb(basis[b]);
    int r = (int)B.size();
    int total = 1 << r;

    ld sum = 0.0L;
    int x = 0, prevg = 0;
    for(int mask = 0; mask < total; ++mask){
        int g = mask ^ (mask >> 1);
        if(mask == 0){
            x = 0;
        }else{
            int diff = g ^ prevg;
            int idx = __builtin_ctz(diff);
            x ^= B[idx];
        }
        prevg = g;

        ld term = 1.0L;
        for(int i = 0; i < K; ++i) term *= (ld)x;
        sum += term;
    }

    ld ans = (ld)sum / (ld)max(1, total);
    ld scaled = ans * 100.0L;
    ld out = ceill(scaled - 1e-12L) / 100.0L;

    cout.setf(std::ios::fixed);
    cout << setprecision(2) << (double)out << endl;
}

int main(){
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}
