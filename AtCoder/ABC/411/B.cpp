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

    int d[n-1];
    for(int i=0; i<n-1; i++){
    	cin >> d[i];
    }

    for(int i=0; i<n-1; i++){
    	
    	int sum = d[i];
    	cout << sum << " ";
    	for(int j=i+1; j<n-1; j++){
    		sum+= d[j];
    		cout << sum << " ";
    	}
    	cout << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
