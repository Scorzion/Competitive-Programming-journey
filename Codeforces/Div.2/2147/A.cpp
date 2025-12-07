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
    int x, y;
    cin >> x >> y;

    if(y>x){
    	cout << 2 << endl;
    	return;
    }
    else{
    	if(x==y){
    		cout << -1 << endl;
    		return;
    	}
    	else{
    		if(y==1){
    			 cout << -1 << endl;
    			 return;
    		}
    		else{
    			if(x-y>=2){
    				cout << 3 << endl;
    				return;
    			}
    			else{
    				cout << -1 << endl;
    				return;
    			}
    		}
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
