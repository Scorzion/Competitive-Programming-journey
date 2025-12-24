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

    int cnt_ab = 0;
    int cnt_ba = 0;

    for(int i=0; i<s.size()-1; i++){
    	if(s[i]=='a' && s[i+1]=='b') cnt_ab++;
    	if(s[i]=='b' && s[i+1]=='a') cnt_ba++;
    }

    if(cnt_ab-cnt_ba==0){
    	cout << s << endl;
    }
    else{
    	int n = s.size();
    	bool flag = 0;
    	if(cnt_ab>cnt_ba){
    		if(s[n-1]=='b' || s[n-2]=='b'){
    			s[n-1]='a';
    		}
    		else if(s[n-1]=='b' || s[n-2]=='a'){
    			s[n-1]='a';
    		}
    		else if(s[0]=='a' && s[1]=='a'){
    			s[0]='b';
    		}
    		else if(s[0]=='a' && s[1]=='b'){
    			s[0]='a';
    		}
    	}
    	else{
    		if(cnt_ba>cnt_ab){
	    		if(s[n-1]=='a' || s[n-2]=='a'){
	    			s[n-1]='b';
	    		}
	    		else if(s[n-1]=='a' || s[n-2]=='b'){
	    			s[n-1]='b';
	    		}
	    		else if(s[0]=='b' && s[1]=='b'){
	    			s[0]='a';
	    		}
	    		else if(s[0]=='b' && s[1]=='a'){
	    			s[0]='b';
	    		}
    		}
    	}
    	cout << s << endl;
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
