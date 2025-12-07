/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - 
    SC    - 
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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    bool firstUnknown = (a[0] == -1);
    bool lastUnknown  = (a[n-1] == -1);

    if(firstUnknown && lastUnknown){
        a[0] = 0;
        a[n-1] = 0;
    }else if(firstUnknown){
        a[0] = a[n-1];
    }else if(lastUnknown){
        a[n-1] = a[0];
    }

    for(int i = 0; i < n; ++i){
        if(a[i] == -1) a[i] = 0;
    }

    ll diff = llabs(a[n-1] - a[0]);
    cout << diff << endl;
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
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
