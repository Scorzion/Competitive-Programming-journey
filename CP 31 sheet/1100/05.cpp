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

    if(n==1){
    	cout << 0 << endl;
    	return;
    }
    set<ll> st;
    for(int i=1; i*i<=n; i++){
    	if(n%i==0 && n/i>1){
    		st.insert(i);

    		if(n%(n/i)==0 && n/(n/i)>1){
    			st.insert(n/i);
    		}
    	}
    }

    ll maxi = LLONG_MIN;
    ll mini = LLONG_MAX;
    ll sum = 0;
    ll ans = 0;
    for(auto it:st){
    	maxi = 0;
    	mini = LLONG_MAX;
    	for(int j=0; j<n; j++){
    		sum += a[j];
    		if((j+1)%it==0){
    			maxi = max(sum, maxi);
    			mini = min(mini, sum);
    			sum = 0;
    		}
    	}
    	ans = max(ans, maxi-mini);
    }

    cout << ans << endl;

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
