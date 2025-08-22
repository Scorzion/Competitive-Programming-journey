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

    int flag = 0;
    for(int i=0; i<n; i++){
    	if(flag==0){
    		cout << "a";
    		flag = 1;
    		continue;
    	}

    	if(flag ==1){
    		cout << "b";
    		flag = 2;
    		continue;
    	}

    	if(flag ==2){
    		cout << "c";
    		flag = 0;
    		continue;
    	}
    }
    cout << endl;

 
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
