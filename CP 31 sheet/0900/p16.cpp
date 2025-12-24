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
    string s, w;
    cin >> s >> w;

    map<char,int> mw;
    for(int i=0; i<w.size(); i++) mw[w[i]]++;

    map<char,int> m;
    int x = s.size()-1;

    for(int i=w.size()-1; i>=0; i--){
    	bool flag = 0;
    	
    	for(int j=x; j>=0; j--){
    		m[s[j]]++;
    		if(w[i]==s[j] && m[w[i]]<=mw[w[i]]){
    			flag = 1;
    			x = j-1;
    			break;
    		}
    	}

    	if(flag == 0){
    		cout << "NO" << endl;
    		return;
    	}
    }

    cout << "YES" << endl;
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
