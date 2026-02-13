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
    ll n;
    cin >> n;

    set<ll> st;

    while(true){
	    ll k = n;
	    while(k){
	    	if(k%10!=0) st.insert(k%10);
	    	k /= 10;
	    }

	    bool chk = 1;
	    for(auto it:st){
	    	if(n%it!=0){
	    		st.clear();
	    		chk = 0;
	    		n++;
	    		break;
	    	}
	    }

	    if(chk){
	    	cout << n << endl;
	    	return;
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
