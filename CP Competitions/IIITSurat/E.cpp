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
    ll x;

    cin >> n >> x;

    map<ll,ll> mp;

    for(int i=0; i<n; i++){
    	ll val;
    	cin >> val;

    	if(val<x){
    		mp[val]++;
    	}
    }

    for(auto it=mp.begin(); it!=mp.end(); ){
    	ll k = it->first;
    	if(k>=x) break;

    	ll cnt = it->second;
    	ll cur = cnt/(k+1);

    	it->second %= (k+1);

    	if(cur>0){
    		mp[k+1] += cur;
    	}

    	if(it->second==0) it = mp.erase(it);
    	else ++it;
    }

    if(mp.count(x) && mp[x]>0){
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


    solve();
    
    return 0;
}
