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
    int n, k, x;
    cin >> n >> k >> x;

    if(x!=1){
    	cout << "YES"  << endl;
    	cout << n << endl;
    	while(n>0){
    		cout << 1 << " ";
    		n--;
    	}
    	cout << endl;
    }
    else{
    	if(n%2==0){
    		if(k>=2){
    			cout << "YES" << endl;
    			cout << n/2 << endl;
    			while(n>0){
			    	cout << 2 << " ";
			    	n-=2;
			    }
			    cout << endl;
    		}
    		else{
    			cout << "NO" << endl;
    		}
    	}
    	else{
    		if(k>=3){
    			cout << "YES" << endl;
    			cout << n/2 << endl;
    			while(n>3){
			    	cout << 2 << " ";
			    	n-=2;
			    }
			    cout << 3 << endl;
    		}
    		else{
    			cout << "NO" << endl;
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

