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
#include <climits>
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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), x(q);
    for(auto &it:a) cin >> it;
    for(auto &it:x) cin >> it;

    ll min_x = LLONG_MAX;
    for(int i=0; i<q; i++){
        if(x[i]<min_x){
            min_x = min(min_x,x[i]);
        	for(int j=0; j<n; j++){
        		if(a[j]%(1LL<<x[i])==0){
        			a[j] += (1LL<<(x[i]-1));
        		}
        	}
        }
    }

    for(auto &it:a){
    	cout << it << " ";
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
