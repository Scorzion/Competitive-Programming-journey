/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    -
    Logic - O()

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
	int n;
	cin >> n;

	int px,py,qx,qy;
	cin >> px >> py >> qx >> qy;

	int a[n];
	int sum = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}  

	sum -= a[n-1];
	int d = sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));

	if(n==1 && d!=a[n-1]){
		cout << "NO" << endl;
		return;
	}

	if(px==qx && py == qy){
		if(n==2 && a[0]!=a[1]){
			cout << "NO" << endl;
			return;
		}
	}

	if(sum >= d - a[n-1]){
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
