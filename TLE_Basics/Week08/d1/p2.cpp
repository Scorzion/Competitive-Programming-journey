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

void product(ll a[], int n){
	ll pro = 1;
    ll pro1 = 0;
	for(int i=0; i<n; i++){
		pro1 = pro;
        pro = pro1 * a[i];
		if(pro1 > ((ld)1e18 / (ld)a[i])){
			cout << -1 << endl;
			return;
		}
		
	}

    cout << pro << endl;
    return;
}

void solve(){
    int n;
    cin >> n;

    ll a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	
    	if(a[i]==0){
    		cout << 0 << endl;
    		return;
    	}
    }

    product(a, n);
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
