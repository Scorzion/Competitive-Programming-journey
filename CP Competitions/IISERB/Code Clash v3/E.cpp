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

    vector<ll> s(n);
    for(auto &it:s) cin>> it;

    map<ll,ll> mp;
    for(int i=0; i<n; i++){
    	mp[s[i]]++;
    }

    ll ans = 0;
    ans += mp[4];
    mp[4]=0;
    ans += mp[2]/2;
    mp[2] %= 2;

    if(mp[1]>=mp[3]){
    	
    	mp[1]-= mp[3];
    	ans += mp[3];
    	ans += (mp[1]/4);

    	mp[1] %= 4;
    	if(mp[2]==1){
    		if(mp[1]==2 || mp[1]==1){
    			ans++;
    		}
    		else{
    			ans += 2;
    		}

    		if(mp[1]==0){
    			ans++;
    		}
    	}
    	else{
    		if(mp[1]>0){
    			ans++;
    		}
    	}
   
    }
    else{
    	ans+= mp[1];
    	mp[3]-= mp[1];
    	ans += mp[3];

    	if(mp[2]%2==1){
    		ans++;
    	}
    	
    }



cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

  
        solve();
    
    return 0;
}
