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

    vector<int> v(n);
    ll cnt5 = 0;
    ll cnt0 = 0;
    for(auto &it:v){
    	cin >> it;
    	if(it==5) cnt5++;
    	else cnt0++;
    }
    if(!cnt0){
    	cout << -1 << endl;
    	return;
    }
    cnt5 /= 9;
    for(int i=0; i<cnt5*9; i++) cout << 5;

    if(!cnt5) cnt0 = 1;
    for(int i=0; i<cnt0; i++) cout << 0;
    cout << endl;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
