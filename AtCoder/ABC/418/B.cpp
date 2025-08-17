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
    string s;
    cin >> s;

   	double maxi = 0;
    double x = 0;
    for(int i = 0; i<s.size()-1; i++){
    	if(s[i]=='t'){
    		int cnt=1;
    		int size=1;
	    	
	    	for(int j=i+1; j<s.size(); j++){
	    		size++;
	    		if(s[j]=='t'){
	    			cnt++;
	
        			if(cnt!=2 && size!=2){
		    			x = (cnt*1.0-2.0)/(size*1.0 -2.0);
		    			maxi = max(x,maxi);
	    			}
	    		}
	    	}
    	}
    }

    cout << fixed << setprecision(9) << maxi << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
