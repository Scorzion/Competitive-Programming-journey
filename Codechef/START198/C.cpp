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
    ll a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    ll sumi = a1*5 + b1;
    ll sumf = a2*5 + b2;

    if(sumi < sumf){
    	cout << "NO" << endl;
    	return;
    }

    if(sumi == sumf){
    	cout << "YES" << endl;
    	return;
    }

    sumi -= b2;
    sumi -= a2*5;
    
    if(sumi < 0){
    	cout << "NO" << endl;
    	return;
    }

    if(sumi == 0){
    	cout << "YES" << endl;
    	return;
    }

    if(sumi % 6 ==0){
    	cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
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
