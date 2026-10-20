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

void solve(ll n){
    for(int i=2; i*i<=n; i++){
    	int j = 0;
    	while(n%i==0){
    		j++;
    		n/=i;
    	}
        if(j>0){
    	cout << i << "^" << j << " ";
        }
    }

    if(n>1){
    	cout << n << "^" << 1;
    }
    cout << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    while(true){
    ll n;
    cin >> n;
    
    if(n==0){
        break;
    }
    
    solve(n);
    
    }
    return 0;
}
