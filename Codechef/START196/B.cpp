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
    int n, c;
    cin >> n >> c;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    sort(a,a+n);
    if(c> a[n-1]){
    	cout << 0 << endl;
    	return;
    }

    for(int j=0; j<n-1; j++){
    	if(a[j+1]-a[j]>1 && c<a[j+1]){

    		if(c>a[j]){
    			cout << 0 << endl;
    			return;
    		}
    		if(c==a[j]){
    			cout << 1 << endl;
    			return;
    		}

    		if(c<a[j]){
    			cout << a[j]+1-c << endl;
    			return;
    		}
    	}
    }

    cout << a[n-1]+1-c << endl;
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
