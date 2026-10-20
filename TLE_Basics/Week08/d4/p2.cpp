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
    int a, b;
    cin >> a >> b;

    int maxi = INT_MIN;
    for(int i=a; i<b; i++){
    	for(int j=i+1; j<=b; j++){
    		int x = __gcd(i,j);
    		maxi = max(maxi, x);
    	}
    }

    cout << maxi << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


   solve();

    return 0;
}


// O(n2) not good soln