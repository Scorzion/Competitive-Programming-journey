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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

    if(l1==l2 && l2==l3){
    	if(l1 == b1+b2+b3){
    		cout << "YES" << endl;
    		return;
    	}
    }
	else{
		if(l1 == l2+l3){
			if(b2 == b3 && l1 == b1 + b2){
				cout << "YES" << endl;
				return;
			}
		}
	}

	if(b1==b2 && b2==b3){
    	if(b1 == l1+l2+l3){
    		cout << "YES" << endl;
    		return;
    	}
    }
	else{
		if(b1 == b2+b3){
			if(l2 == l3 && b1 == l1 + l2){
				cout << "YES" << endl;
				return;
			}
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
