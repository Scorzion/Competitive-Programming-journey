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

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	if(n==1){
		if(a[0]==1){
			cout << "YES" << endl;
			return;
		}
		else{
			cout << "NO" << endl;
			return;
		}
	}

	sort(a, a+n);
	int max = a[n-1];
	int max2 = a[n-2];

	if(max-max2<=1){
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


// tc - O(nlogn)
// sc - O(1)