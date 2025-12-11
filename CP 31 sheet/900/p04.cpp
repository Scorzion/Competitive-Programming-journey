/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    ll a, b, n;
    cin >> a >> b >> n;

    ll x[n];
    for(ll i=0; i<n;i++){
    	cin >> x[i];
    }

    sort(x,x+n);

    ll rest=1;
    ll ans = b-1;
    for(ll i=0; i<n; i++){
    	
    	if(rest+x[i]<=a){
    		rest += x[i];
    	}
    	else{
    		ans += rest-1;
    		rest = 1;
    		
    		if(rest+x[i]<=a){
    			rest+= x[i];
    		}
    		else{
    			if(i==n-1){
    				ans+= a;
    				rest = 0;
    			}
    			else{
    			ans += a - 1;
    			rest = 1;
    			}
    		}
    	}
    }

    cout << ans + rest << endl;
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
