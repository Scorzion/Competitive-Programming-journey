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

	if(n>=1 && n<=9){
		cout << "NO" << endl;
		return;
	}

	int flag1 = 0;

	while(n>9){
		// cout << n << endl;
		if(flag1==0){
			if(n%10==9){
				cout << "NO" << endl;
				return;
			}
		}

		if(flag1==1){
			if(n%10==0){
				cout << "NO" << endl;
				return;
			}
		}

		flag1=1;
		n /= 10;
		}


	if(n==1){
	cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
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
