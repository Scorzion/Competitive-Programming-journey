/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

// Link: https://usaco.org/index.php?page=viewproblem2&cpid=595

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
    ll n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    vector<int> p(n);
    p[0] = a[0];
    for(int i=1; i<n; i++){
    	p[i] = a[i] + p[i-1];
    }

    int maxi = INT_MIN;
    for(int i=0; i<n-1; i++){
    	for(int j=i+1; j<n; j++){
    		int y = j -1;
    		int x=0;
    		if(!i){
    			x = p[y];
    		}
    		else{
    			x = p[y] - p[i-1];
    		}

    		if(x%7==0){
    			maxi = max(maxi, abs(j-i));
    		}
    	}
    }

    cout << maxi << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
