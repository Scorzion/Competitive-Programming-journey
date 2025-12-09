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

    int cnt=n;

    int x = 0;
    if(n%2==0){
    	x = n/2;
    }
    else{
    	x = n/2 + 1;
    }
    for(int i=0;i<x; i++){
    	if(s[i]!=s[n-1-i]){
    		cnt-=2;
    	}
    	else{
    		cout << cnt << endl;
    		return;
    	}
    }

    cout << cnt << endl;
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
