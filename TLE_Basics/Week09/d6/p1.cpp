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
#include <cmath>
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

    ll a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    sort(a,a+n);

    if(n==1 || n==2){
    	cout << 0 << endl;
    	for(auto it:a){
    		cout << it << " ";
    	}
    	cout << endl;
    	return;
    }

    ll b[n];
   	int x = 0;
    int y = n/2;

    for(int i=0; i<n; i++){
    	if(i%2==1){
    		b[i]=a[x];
    		x++;
    	}
    	else{
    		b[i]=a[y];
    		y++;
    	}
    }

    if(n%2==0){
    	cout << n/2 - 1 << endl;
    }
    else{
    	cout << n/2 << endl;
    }
    for(auto it:b){
    	cout << it << " ";
    }
    cout << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
