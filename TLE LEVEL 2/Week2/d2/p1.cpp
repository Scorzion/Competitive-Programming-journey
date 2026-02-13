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
    string x, y;
    cin >> x >> y;

    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());

    int pos_x = 0;
    int pos_y = 0;

    for(int i=0; i<y.size(); i++){
    	if(y[i]=='1'){
    		pos_y = i;
    		break;
    	}
    }

    for(int i=pos_y; i<x.size(); i++){
    	if(x[i]=='1'){
    		pos_x = i;
    		break;
    	}
    }

    cout << pos_x - pos_y << endl;
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
