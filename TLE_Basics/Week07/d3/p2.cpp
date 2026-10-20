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
	int n;
	cin >> n;

	int a, b;
	cin >> a >> b;
	int x = 0;
	int y = 0;

	while(n-(a*x)>=0){
		if((n-(a*x))%b == 0){
			cout << "YES" << endl;
			cout << x << " " << (n-(a*x))/b << endl;
			return;
		}
		x++;
	}

	cout << "NO" << endl;
	return;

}


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
