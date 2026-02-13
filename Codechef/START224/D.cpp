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
    ll n, k;
    cin >> n >> k;

    vector<ll> p(n);
    for(auto &it:p){
    	cin >> it;
    }

    int i = 0;
    int j = 0;
    ll ans = 0;

    ll x = p[0];
    ll y = p[0];
    while(j<n){
    	if(abs(x-y)-k>0){
    		ans++;
    		i = j+1;
    		j = i;
            x = p[i];
            y = p[j];
    		
    	}
    	else{
    		j++;
            x = min(x,p[j]);
            y = max(y,p[j]);    
    	}
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
