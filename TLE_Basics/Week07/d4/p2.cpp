/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
	ll n;
	cin >> n;


	int c = 1;
	if(n%2 == 0){
		cout << n/2 << " " << n/2 -1 << " " << 1 << endl;
		return;
	}
	else{
		if(n%4==1){
			cout << n/2 -1 << " " << n/2 + 1 << " " << 1 << endl;
			return;
		}
		if(n%4 == 3){
			cout << n/2 -2 << " " << n/2 +2 << " " << 1 << endl;
			return;
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
