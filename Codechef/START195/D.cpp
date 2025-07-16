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

    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	b[i] = a[i];
    }

    sort(b, b+n);

    int i= 1;
    while(i<=2*n){
    	if(i==1){
    		cout << b[n-1] << " ";
    	}
    	else{
    		int ans = 0;
    		int x = 0;
    		if(i%2==0  && i<=n){
    			ans += b[n-1] + b[n-2];
    			x += 2;
    			int p = 3;
    			int y = i - 2;
    			while(y>0 && p<=n){
    				ans += x;
    				ans += b[n-p];
    				x += 2;
    				p++;
    				y -= 2;
    			}
    		}
    		else{
    			ans+= b[n-1];
    			x += 1;
    			int p = 2;
    			int y = i - 1;
    			while(y>0 && p<=n){
    				ans += x;
    				ans += b[n-p];
    				x += 2;
    				p++;
    				y -= 2;
    			}
    		}


    		int oans = 0;
    		for(int j = 0; j<=min(i,n-1); j++){

    			oans += b[n-(j+1)];
    		}


    		cout << max(ans,oans)  << " ";
    	}
    	i++;
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
