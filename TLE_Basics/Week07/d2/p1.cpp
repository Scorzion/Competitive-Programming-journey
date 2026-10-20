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
	ull a, b;
	cin >> a >> b;

	if(a-b!=1){
		cout << "NO" << endl;
		return;
	}
	ull n = a+b;


	for(ull i=2; i*i<=n; i++){
		if(n%i==0){
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
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