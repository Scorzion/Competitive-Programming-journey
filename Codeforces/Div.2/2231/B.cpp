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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it:a) cin >> it;

    vector<int> desc;
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            desc.pb(i);
        }
    }

    if(desc.empty()){ 
        cout << "YES"<< endl; 
        return; 
    }
    
    for(int j = 0; j<desc.size()-1; j++){
        if(desc[j+1] == desc[j]+1){ 
            cout << "NO" << endl; 
            return; 
        }
    }

    int L = 0;
    for(int d : desc){
        L = max(L, a[d] - a[d+1]);
    } 

    int R = INT_MAX;
    for(int j = 0; j<desc.size()-1; j++){
        int d1 = desc[j];
        int d2 = desc[j+1];

        int best = 0;
        for(int m=d1+1; m<d2; m++){
            best = max(best,a[m+1]-a[m]);
        }
        R = min(R,best);
    }

    cout << (L <= R? "YES" : "NO") << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}