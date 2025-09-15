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
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    if(max(a,b)/(2*1.0) -1.0 <= min(a,b)){
    	c -= a;
    	d -= b;

    	if(max(c,d)/(2*1.0) -1.0 <= min(c,d)){
    		cout << "YES" << endl;

    	}
    	else{
    		cout << "NO" << endl;
    	}
    }
    else{
    	cout << "NO" << endl;
    	return;
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
