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
    ll x, n;
    cin >> x >> n;

    if(n==0){
    	cout << x << endl;
    	return;
    }

    if(x%2==0){
    	if(n%4==0){
    		cout << x << endl;
    	}
    	else if(n%4==1){
    		cout << x-n << endl;
    	}
    	else if(n%4==2){
    		cout << x+1 << endl;
    	}
    	else if(n%4==3){
    		cout << x+n+1 << endl;
    	}
    }
    else{
    	if(n%4==0){
    		cout << x << endl;
    	}
    	else if(n%4==1){
    		cout << x+n << endl;
    	}
    	else if(n%4==2){
    		cout << x-1 << endl;
    	}
    	else if(n%4==3){
    		cout << x-n-1 << endl;
    	}
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
