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

    string s;
    cin >> s;

    map<char,int> m;
    for(int i=0; i<n; i++){
    	m[s[i]]++;
    }

    ll cnt = 0;
    ll sp = 0;
    for(auto it:m){
    	if(it.second%2==1 && it.second>2){
    		cnt+= it.second;
    	}
    	else{
    		sp += it.second;
    	}
    	
    }

    if(m.size()==1){
    	if(cnt+sp>2){
    		cout << "NO" << endl;
    		return;
    	}
    }

    if(cnt==0){
    	cout << "YES" << endl;
    }
    else{
    	if(cnt==sp || cnt==sp+1){
    		cout << "YES" << endl;
    	}
    	else{
    		cout << "NO" << endl;
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
