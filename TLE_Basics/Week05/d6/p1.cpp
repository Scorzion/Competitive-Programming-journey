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

	if(n == 1){
		cout << 1 << endl;
		return;
	}

	if(n==2){
		cout << 2 << endl;
		return;
	}

	int x = n%3;
	int y = n/3;
	if(n>2){}
		if(x==0){
			while(y>0){
				cout << 21;
				y--;
			}
			cout << endl;
			return;
		}

		if(x==1){
			while(y>0){
				cout << 12;
				y--;
			}
			cout << 1 << endl;
			return;
		}

		if(x==2){
			while(y>0){
			cout << 21;
			y--;
			}
			cout << 2 << endl;
			return;
		}
	return;
}

	

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
