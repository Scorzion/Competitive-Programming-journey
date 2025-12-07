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
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    if(m==1){
        for(int i=0; i<x.size(); i++){
            if(s[0]==x[i]){
                cout << 0 << endl;
                return;
            }
        }
        cout << -1 << endl;
        return;
    }

    int cnt=0;
    if(n<m){
    	while(x.size()<s.size()){
            x += x;
    		cnt++;
    	}
    }

    int flag = 0;
    // cout << cnt << endl;
    while(cnt<=5){
    	for(int i=0; i<x.size()-s.size()+1; i++){
    		
            if(x[i]==s[0]){
    			for(int j=1; j<s.size(); j++){
    				if(x[j+i]!=s[j]){
    					flag = 0;
    					break;
    				}
    				else{
    					flag = 1;
    				}
    			}
    		}

            if(flag==1){
                cout << cnt << endl;
                return;
            }
    	}
    	x += x;
    	cnt++;
    }

    cout << -1 << endl;
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
