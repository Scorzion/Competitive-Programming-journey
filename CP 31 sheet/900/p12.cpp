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
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &it:a){
    	cin >> it;
    }

    int ans = INT_MIN;
    ans = max(ans, a[n-1]-a[0]);
    for(int i=0; i<n-1; i++){
    	ans = max(ans, a[i]-a[i+1]);
    }

    for(int i=1; i<n; i++){
    	ans = max(ans, a[i]-a[0]);
    }

    for(int i=0; i<n-1; i++){
        ans = max(ans, a[n-1]-a[i]);
    }

    cout << ans << endl;

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
