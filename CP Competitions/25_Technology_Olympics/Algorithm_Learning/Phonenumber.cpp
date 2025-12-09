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

    while(n--){
    	string s;
    	cin >> s;

    	int k = s.size();

    	if(k<11 && k>13){
    		cout << "invalid" << endl;
    		continue;
    	}

    	bool flag = 0;
    	for(int i=1; i<k; i++){
    		if(s[i]=='+'){
    			flag = 1;
    			break;
    		}
    	}
    	if(flag==1){
    		cout << "invalid" << endl;
    		continue;
    	}

    	if(s[0]=='+' && s[1]=='9' && s[2]=='8'){
    		if(k==13){
    			cout << s << endl;
    			continue;
    		}
    	}

    	if(s[0]=='0' && s[1]=='9'){
    		if(k==11){
    			s[0]='8';
    			
    			cout << '+' << 9 << s << endl;
    			continue;
    		}
    	}

    	if(s[0]=='9' && s[1]=='8'){
    		if(k==12){
    			cout << '+' << s << endl;
    			continue;
    		}
    	}

    	cout << "invalid" << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
