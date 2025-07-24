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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(ll i=0; i<n; i++){
    	cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll y = a[1];
    ll x = 0;

    ll sum = 0;
    while(k>0){
    	x = y + a[0];

    	if(x%2==0){
    		x /= 2;
    	}
    	else{
    		x += 1;
    		x /= 2;
    	}

    	if(y==x){
    		break;
    	}
        y = x;
        sum += x;
    	
    	k--;	
    }

    
    for(int i=0; i<a.size(); i++){
    	sum += a[i];
    }

    cout << sum + (k*x) << endl;
    return;
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
