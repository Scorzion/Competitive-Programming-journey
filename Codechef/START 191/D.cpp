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
    int x, y, z;
    cin >> x >> y >> z;

    if(x==0 && y+z >=2){
    	cout << "YES" << endl;
    	return;
    }

    if(y>0 && z>=x){
    	cout << "YES" << endl;
    	return;
    }

    if(y==0){
    	if(x==1 && z>=1){
    		cout << "YES" << endl;
    		return;
    	}

    	if(x>1 && z>=x-1){
    		cout << "YES" << endl;
    		return;
    	}
    }

    cout << "NO" << endl;
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
