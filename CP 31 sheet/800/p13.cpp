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

    int cnt = 1;
    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];

    	if(i!=0){
    		if(a[i]==a[0]){
    			cnt++;
    		}
    	}
    }

    if(cnt==n){
    	cout << -1 << endl;
    	return;
    }

    sort(a.begin(),a.end());
    
    int x = 0;
    for(int i=0; i<n; i++){
    	if(a[i]==a[n-1]){
    		x = i;
    		break;
    	}
    }

    cout << x <<" " << n-x << endl;
    
    for(int i=0; i<x; i++){
    		cout << a[i] << " ";
    }
    cout << endl;

    for(int i=x; i<n; i++){
    	cout << a[i] << " ";
    }
    cout << endl;

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
