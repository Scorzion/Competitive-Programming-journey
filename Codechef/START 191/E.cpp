/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
    	cin >> b[i];
    }

    int maxi =INT_MIN;
    for(int i=0; i<n; i++){
    	maxi = max(maxi, a[i]);
    }

    int rest = 0;
    for(int i=0; i<n; i++){
    	if(a[i]+b[i]>= maxi){
    		rest += 2*(a[i]+b[i]-maxi);
    		a[i]=maxi;
    	}
    	else{
    		a[i] += b[i];
    	}
    }

    for(int i=0; i<n; i++){
    	if(a[i]<maxi-1){
    		int x = maxi - a[i];
    		if(x%2==0){
	    		if(rest>=x){
	    			rest -= x;
	    			a[i]=maxi;
	    		}
	    		else{
	    			rest = 0;
	    			a[i] += rest;
	    			break;
	    		}
    		}
    		else{
    			if(rest>=x ){
    				rest -= x -1;
    				a[i]=maxi - 1;
    			}
    			else{
    				rest = 0;
    				a[i] += rest;
    				break;
    			}
    		}
    	}
    }
    cout << rest << endl;
    
    if(rest==0){
    	maxi = INT_MIN;
    	for(int i=0; i<n; i++){
    		maxi = max(maxi, a[i]);
    	}
    	cout << maxi << endl;
    	return;
    }
    else{
    	while(rest != 0){
    		for(int i=0; i<n; i++){
    			a[i] += 2;
    			rest -= 2;
    			if(rest ==0){
    				break;
    			}
    		}
    	}
    }

    maxi = INT_MIN;
    for(int i=0; i<n; i++){
    	maxi = max(maxi, a[i]);
    }
    
    cout << maxi << endl;
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
