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
    int n, s;
    cin >> n >> s;


    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    if(n==1){
    	if(s==a[0]){
    		cout << 0 << endl;
    		return;
    	}
    	else{
    		cout << abs(s-a[0]) << endl;
    		return;
    	}
    }

    if(s<=a[0]){
    	int sum = a[0]-s;
    	for(int i=0; i<n-1; i++){
    		sum += abs(a[i+1]-a[i]);
    	}
    	cout << sum << endl;
    	return;
    }

    if(s>=a[n-1]){
    	int sum = abs(a[n-1]-s);
    	for(int i=n-1; i>0; i--){
    		sum += abs(a[i-1]-a[i]);
    	}
    	cout << sum << endl;
    	return;
    }

    int x = 0;
    int flag = 0;
    for(int i=0; i<n-1; i++){
    	if(s>=a[i] && s<=a[i+1]){
    		x = i;
    	break;
  		}
    }

    int suml = s - a[x];
    int sumr = a[x+1] - s;
    for(int i = x; i>0; i--){
    	suml += abs(a[i-1]-a[i]);
    }

    for(int i= x+1; i<n-1; i++){
    	sumr += abs(a[i+1]-a[i]);
    }


    if(suml <= sumr ){
    	cout << (2*suml) + sumr << endl;
    	return;
    }
    else{
    	cout << (2*sumr) + suml << endl;
    	return;
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
