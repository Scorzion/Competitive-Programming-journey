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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for(ll i=0; i<n; i++){
    	cin >> a[i];
    }

    vector<ll> b(m);
    for(ll i=0; i<m; i++){
    	cin >> b[i];
    }

    for(ll i=0; i<m; i++){
    	for(ll j=0; j<a.size(); j++){
    		if(b[i]==a[j]){
    			a.erase(a.begin()+j);
    			break;
    		}
    	}
    }

    for(ll i=0; i<a.size(); i++){
    	cout << a[i] << " ";
    }
    cout << endl;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


        solve();

    return 0;
}
