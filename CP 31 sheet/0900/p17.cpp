/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic -  (2^m)*x >= n; now using this m value, i calculated no of clones. and just subtract highest repating value with n.

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

    map<int,int> m;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;
    	m[x]++;
    	maxi = max(m[x],maxi);
    }

    if(maxi == n){
    	cout << 0 << endl;
    	return;
    }

    ll y = (n+maxi-1)/maxi;
    int z = 64 - __builtin_clzll(y - 1); // for m = ceil(log2(y))

    cout << z + n - maxi << endl;

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
