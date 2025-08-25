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


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

   	vector<ll> cost;
	ll c = 3;
	ll cnt = 1;

	for(int i=0; i<20; i++){
	    cost.pb(c);
	    c = 3*c + cnt;
	    cnt *= 3;
	}

    int t;
    cin >> t;

    while(t--){
	    ll n, k;
	    cin >> n >> k;

	    vector<ll> tr;
	    ll min_k = 0;

	    while(n){
	    	tr.pb(n%3);
	    	min_k += n%3;
	    	n /= 3;
	    }

	    if(min_k > k){
	    	cout << -1 << endl;
	    	continue;
	    }

	    k -= min_k;
	    k /= 2;

	    for(int i=tr.size()-1; i>=1; i--){
	    	if(tr[i]<=k){
	    		tr[i-1] += 3*tr[i];
	    		k -= tr[i];
	    		tr[i]=0;
	    	}
	    	else{
	    		tr[i-1] += k*3;
	    		tr[i] -= k;
	    		break;
	    	}
	    }

	    ll ans = 0;
	    for(int i=tr.size()-1; i>=0; i--){
	    	ans += cost[i]*tr[i];
	    }

	    cout << ans << endl;
    }
    return 0;
}
