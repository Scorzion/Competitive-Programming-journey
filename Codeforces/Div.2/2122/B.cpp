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
	cin  >> n;

	int q[n][4];
	for(int i=0; i<n; i++){
		for(int j=0; j<4; j++){
			cin >> q[i][j];
		}
	}

	int ans = 0;
	int r = 0;
	int flag = 0;

	for(int i=0; i<n; i++){
		flag = 0;
		int t = q[i][1]-q[i][3];


		if(q[i][0]==0 && t>0){
			r += t;
		}

		if(q[i][2]==0 && q[i][0]!=0){
			r += t;
		}
	}


	int count_0 = 0;
	int count_1 = 0;

	for(int i=0; i<n; i++){
		count_0 += abs(q[i][0]-q[i][2]);

		if(q[i][1]-q[i][3]>0){
			count_1 += min(q[i][0], q[i][2]);
		}
		else{
			count_1 += abs(q[i][1]-q[i][3]);
		}
	}

	ans += count_0/2;  
	ans += count_1;
	

	cout << ans << endl;
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
