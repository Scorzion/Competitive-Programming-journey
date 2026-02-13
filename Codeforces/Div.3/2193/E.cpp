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
    map<ll,ll> mp;
    for(auto &it:a){
    	cin >> it;
    	mp[it]++;
    }

    mp[0]++;

    vector<ll> ans(n,0);
    for(int i=0; i<n; i++){
    	if(i-a[i]>=0){
    		if(mp[i-a[i]]>=1){
    			ans[i]=1;
    		}
    		else{
    			
    		}
    	}
    	else{
    		ans[i]=-1
    	}
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
