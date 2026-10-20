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

bool check(int x){
	int num = 0;
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0){
			num++;
		}

		if(num>0){
			return 1;
		}
	}

	return 0;
}

void solve(){
	int n;
	cin >> n;	

	int a = 4;
	int b = 0;
	while(true){
		b = a+n;
		if(check(a)==1 && check(b)==1){
			cout << b << " " << a << endl;
			return;
		}
		a++;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
