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
    ll x, y;
    cin >> x >> y;

    if(__gcd(x,y)>1){
    		cout << 0 <<endl;
    		return;
    }
    if(x==y && x!=1){
    	cout << 0 << endl;
    	return;
    }

    if(x%2==0 && y%2==0){
    	cout << 0 << endl;
    	return;
    }

    if(x!=y && x!=1){
    	if(__gcd(x+1, y)>1 || __gcd(y+1, x)>1){
    		cout << 1 << endl;
    		return;
    	}
    }

    int cnt=0;
    if(x%2!=0){
    	cnt++;
    }

    if(y%2!=0){
    	cnt++;
    }

    cout << cnt << endl;
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
