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
#include <climits>
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
    for(auto &it:a) cin >> it;

    vector<ll> v = a;
    sort(v.begin(),v.end());

    bool flag = 0;
    for(int i=0; i<n; i++){
    	if(v[i]!=a[i]){
    		flag = 1;
    		break;
    	}
    }

    if(!flag){
    	cout << -1 << endl;
    	return;
    }

    ll k = 0;
    for(int i=0; i<n; i++){
    	if(abs(v[i]-a[i])>0){
    		k = max(k, abs(v[i]-a[i]));
    	}
    	
    }

    cout << k << endl;
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
