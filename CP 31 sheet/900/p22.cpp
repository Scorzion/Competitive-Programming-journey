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

    vector<ll> a(n);

    int cnt0 = 0;
    int cnt1 = 0;

    for(auto &it:a){
    	cin >> it;
    	if(it==0) cnt0++;
    	if(it==1) cnt1++;
    } 
    if(!cnt0){
    	cout << cnt1 << endl;
    	return;
    }

    if(!cnt1){
    	cout << 0 << endl;
    	return;
    }

    cout << (1LL<<cnt0)*cnt1 << endl;

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
