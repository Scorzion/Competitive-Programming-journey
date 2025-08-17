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
    int q;
    cin >> q;

    vector<int> v;
    int mini = INT_MAX;
    while(q--){
    	int t;
    	cin >> t;


    	if(t==1){
    		int x; 
    		cin >> x;
    		v.pb(x);
    	}
    	else{
    		if(v.size()>0){
    			sort(v.begin(), v.end());
    			cout << v[0] << endl;
    			v.erase(v.begin());
    		}
    	}
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
