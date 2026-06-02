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

vector<int> pairs[1001];

void solve(){
    int n;
    cin >> n;

    vector<int> idx(1001,0);

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        idx[x]=i;

    }

    int ans = -1;
    for(int i=1; i<=1000; i++){
        if(idx[i]==0){
            continue;
        }

        for(int j:pairs[i]){
            if(idx[j]!=0){
                ans = max(ans,idx[i]+idx[j]);
            }
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();


    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(__gcd(i,j)==1){
                pairs[i].pb(j);
            }
        }
    }

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}