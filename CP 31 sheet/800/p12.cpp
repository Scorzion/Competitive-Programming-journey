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
    int n;
    cin >> n;

    vector<int> b(n);
    for(int i=0; i<n; i++){
    	cin >> b[i];
    }

    if(n==1){
    	cout << 1 << endl;
    	cout << b[0] << endl;
    	return;
    }

    vector<int> a;
    a.pb(b[0]);
    for(int i=1; i<n; i++){
    	if(b[i]<b[i-1]){
    		int x = b[i]-1;
    		if(x==0){
    			x=1;
    		}
    		a.pb(x);
    		a.pb(b[i]);
    	}
    	else{
    		a.pb(b[i]);
    	}
    }
    cout << a.size() << endl;
    for(auto it:a){
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
