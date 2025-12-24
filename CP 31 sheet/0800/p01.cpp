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

bool checker(int a[], int n){
	for(int i=0; i<n-1; i++){
		if(a[i+1]<a[i]){
			return 0;
		}
	}

	return 1;
}

void solve(){
	int n, k;
	cin >> n >> k;
	int x = k;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	if(checker(a,n)==1){
		cout << "YES" << endl;
		return;
	}


	if(k>1){
		cout << "YES" << endl;
		return;
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
