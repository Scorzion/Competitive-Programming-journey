/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

**/
 
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
    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for(int i=0; i<n; i++){
    	cin >> h[i];
    }
    int s = h[k-1];
    
    sort(h.begin(), h.end());
    for(int i=0; i<n; i++){
        if(h[i]==s){
            s = i;
            break;
        }
    }

    int x = 0;
    for(int i=s; i<n-1; i++){
        int d = abs(h[i+1]-h[i]);
        x += d;
        if(h[i]<x){
            cout << "NO" << endl;
            return;
        }
    }

    
    cout << "YES" << endl;
    return;
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
