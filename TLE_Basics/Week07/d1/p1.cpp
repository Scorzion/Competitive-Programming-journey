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

bool check(int n){
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			if(i==4 || i==7){
				return 1;
			}

			if(n/i==4 || n/i)
		}
	}
}
void solve(){
	int n;
	cin >> n;

	bool flag = 0;
	while(n!=0){
		int x = n%10;
		if(x == 4 || x ==7){
			n /= 10;
		}
		else{
			flag = 1;
			break;
		}
	}

	if(flag==0){
		cout << "YES" << endl;
		return;
	}

	if(check(n)==1 && flag ==1){
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
