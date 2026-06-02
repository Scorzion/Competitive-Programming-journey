/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n, q;
    cin >> n >> q;

    map<int,int> pos;

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        if(pos.find(x) == pos.end()){
            pos[x] = i;
        }
    }

    while(q--){
        int x;
        cin >> x;

        int curr = pos[x];
        cout << curr << " ";

        for(auto &it : pos){
            if(it.first!=x && it.second < curr){
                it.second++;
            }
        }
        pos[x] = 1;
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();


    solve();
    
    return 0;
}