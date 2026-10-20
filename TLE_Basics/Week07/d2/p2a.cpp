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
	int l, r, k;
	cin >> l >> r >> k;

	if(r-l==0){
		if(r==1){
			cout << "NO" << endl;
			return;
		}
		else{
			cout << "YES" << endl;
			return;
		}
	}

	int n = r - l + 1;
	int odd = 0;
	if(n%2==0){
		odd = n/2;
	}
	else{
		if(l%2==0){
			odd = n/2;
		}
		else{
			odd = n/2 + 1;
		}
	}

	if(k>=odd){
		cout << "YES" << endl;
		return;
	}
	else{
		cout << "NO" << endl;
		return;
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
