/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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

    if(s.size()==1){
    	cout << 1 << endl;
    	return;
    }

    int cnt0 = 0;
    int cnt1 = 0;

    for(int i=0; i<s.size(); i++){
    	if(s[i]=='0'){
    		cnt0++;
    	}
    	else{
    		cnt1++;
    	}
    }

    if(cnt0==cnt1){
    	cout << 0 << endl;
    	return;
    }

    for(int i=0; i<s.size(); i++){
    	if(s[i]=='1'){
    		if(cnt0==0){
    			cout << s.size()-i << endl;
    			return;
    		}
    		cnt0--;
    	}
    	else{
    		if(cnt1==0){
    			cout << s.size()-i << endl;
    			return;
    		}
    		cnt1--;
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
