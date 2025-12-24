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
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    ll max = 0;
    ll min = 0;
    for(auto &it:a){

    	cin >> it;
    	if(it%x==0) max += it/x;
    	else max += it/x + 1;
    	
    	min += it;
	}

	if(min%x==0) min = min/x;
	else min = min/x + 1;

	cout << min << " "  << max << endl;


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
