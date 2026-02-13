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
    ll a, b;
    cin >> a >> b;

    if(a==b){
    	cout << 0 << endl;
    	return;
    }

    ll x = min(a,b);
    ll y = max(a,b);

    ll ans = 0;
    if(y%x==0 && (y/x)%2==0){
    	y /= x;
    	while(y>1){
    		if(y%8==0){
    			ans++;
    			y /=8;
    		}
    		else if(y%4==0){
    			ans++;
    			y/=4;
    		}
    		else if(y%2==0){
    			ans++;
    			y/=2;
    		}
    		else{
    			cout << -1 << endl;
    			return;
    		}

    	}

    	cout << ans << endl;
    }
    else{
    	cout << -1 << endl;
    }
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
