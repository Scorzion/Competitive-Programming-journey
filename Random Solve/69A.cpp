/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

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

    int a[n][3];

    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    
    for(int i=0; i<n; i++){
    	cin >> a[i][0] >> a[i][1] >> a[i][2];
    	sum_x += a[i][0];
    	sum_y += a[i][1];
    	sum_z += a[i][2];
	}

	if(sum_x == 0 && sum_y==0 && sum_z==0){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
