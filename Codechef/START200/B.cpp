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

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	a[i] = a[i]%2;
    }

    int invt = 0;
    int ans1 = 0;
    for(int i=0; i<n; i++){
    	if(invt==0){
    		if(a[i]==0){
    			ans1++;
    			invt = 1;
    		}
    	}
    	else{
    		if(a[i]==1){
    			ans1++;
    			invt = 0;
    		}
    	}
    }

    int ans2 = 0;
    invt = 1;
    for(int i=0; i<n; i++){
    	if(invt==1){
    		if(a[i]==1){
    			ans2++;
    			invt = 0;
    		}
    	}
    	else{
    		if(a[i]==0){
    			ans2++;
    			invt = 1;
    		}
    	}
    }
    

    cout << max(ans2, ans1) << endl;
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
