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
    for (auto &it:a) cin >> it;

    sort(a.begin(), a.end());

    vector<int> q(n,1);
    int ans = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0; j < i; j++){
            if((a[j] & a[i]) == a[j]){
                q[i] = max(q[i], q[j] + 1);
            }
        }
        ans = max(ans, q[i]);
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
