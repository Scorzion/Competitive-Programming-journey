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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    bool flag = 0;
    if(k%2==1)
    	flag = 1;

    int ans = 0;
    for(int i=0; i<n; i++){
    	if(flag == 1){
    		if(a[i]%2==1){
    			a[i] += k;
    		}
    	}
    	else{
    		if(a[i]%3!=0){
    			if(a[i]%3==1){
	    			a[i] += k;
	    			continue;
    			}

	    		if(a[i]%3==2){
	    			a[i] += 2*k;
	    			continue;
	    		}
    		}
    	}
    }
    

    for(auto it:a){
    	cout << it << " ";
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
