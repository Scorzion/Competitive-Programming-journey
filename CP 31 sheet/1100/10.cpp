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
   	int n, x;
   	cin >> n >> x;

   	vector<int> pre[3];

   	for(int i=0; i<3; i++){
   		int s = 0;
   		pre[i].pb(s);

   		for(int j=0; j<n; j++){
   			int a;
   			cin >> a;

   			if((s|a) != s){
   				s |= a;
   				pre[i].pb(s);
   			}
   		}
   	}

   	bool ans = false;
   	for(int A: pre[0]){
   		for(int B:pre[1]){
   			for(int C:pre[2]){
   				if((A | B | C)==x){
   					ans = true;
   				}
   			}
   		}
   	}

   	if(ans==true){
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

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
