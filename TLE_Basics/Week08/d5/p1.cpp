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

    int g = 0;
    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	g = __gcd(g,a[i]);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
    	int temp = a[i]/g;
    	while(temp%2==0){
    		temp /= 2;
    		ans++;
    	}

    	while(temp%3==0){
    		temp /= 3;
    		ans++;
    	}

    	if(temp!=1){
    		cout << -1 << endl;
    		return;
    	}
    }

    cout << ans << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    
    return 0;
}
