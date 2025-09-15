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
#include <cmath>
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

    vector<string> v(n);
    for(int i=0; i<n; i++){
    	cin >> v[i];
    }

    vector<string> ans;
    set<string> s;

    for(int i=n-1; i>=0; i--){
    	if(s.find(v[i])==s.end()){
    		ans.pb(v[i]);
    		s.insert(v[i]);
    	}
    }

    for(auto it:ans){
    	cout << it << endl;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
