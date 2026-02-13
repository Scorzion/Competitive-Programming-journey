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
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++){
    	s[i] = tolower(s[i]);
    }

    map<char,int> mp;
    for(int i=0; i<n; i++){
    	mp[s[i]]++;
    }

   	int ans = 0;
   	int k = -1;
    for(auto it:mp){
    	if(it.second>=ans){
    		k = it.first;
    	}
    	ans = max(ans,it.second);
    }

    int temp = 0;
    for(auto it:mp){
    	if(it.first!=k){
    		temp = max(temp,it.second);
    	}
    }

    cout << ans + temp << endl;
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
