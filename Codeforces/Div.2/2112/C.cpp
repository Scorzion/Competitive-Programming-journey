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

    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
    	maxi = max(maxi, a[i]);
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
    	if(a[i]==maxi)
    		cnt++;
    }

    int ans = 0;
    sort(a,a+n);

    for(int i=0; i<n-3; i++){
    	for(int j=i+1; j<n-2; j++){
    		for(int k=j+1; k<n-1; k++){
    				if(a[i]+a[j]+a[k]>maxi)
    					ans++;
    		}
    	}
    }

    for(int i=0; i<n-2; i++){
    		for(int j=i+1; j<n-1; j++){
    				if(a[i]+a[j]>maxi)
    					ans++;
    		}
    }
   cout << ans << endl;
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
