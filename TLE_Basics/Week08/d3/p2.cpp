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
    int a, b, k;
    cin >> a >> b >> k;

    int cnt = 0;
    int i=0;
    if(a<=b){
    	i =a;
    }
    else{
    	i =b;
    }
    while(true){
    	if(a%i ==0 && b%i==0){
    		cnt++;
    	}
    	if(cnt==k){
    		cout << i << endl;
    		return;
    	}
    	i--;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
