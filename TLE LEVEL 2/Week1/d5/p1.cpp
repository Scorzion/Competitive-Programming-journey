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

const int N = 200000;

void solve(){
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(N+1,0);
    int tt = n;

    while(tt--){
    	int l, r;
    	cin >> l >> r;

    	diff[l]++;
    	diff[r+1]--;
    }

    for(int i=1; i<N+1; i++){
    	diff[i] += diff[i-1];
    }

    for(int i=1; i<N+1; i++){
    	if(diff[i]>=k) diff[i] = 1;
    	else diff[i] = 0;

    	diff[i] += diff[i-1];
    }


  	while(q--){
  		int a, b;
  		cin >> a >> b;

  		cout << diff[b]-diff[a-1] << endl;
  	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
