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
    int n, x;
    cin >> n >> x;

    int a[n];
    int cnt0 = 0;
    int cnt1 = 0;

    for(int i=0; i<n; i++){
    	cin >> a[i];
    	if(a[i]%2==0){
    		cnt0++;
    	}
    	else{
    		cnt1++;
    	}
    }

    if(x==1){
    	if(cnt1>=1){
    		cout << "YES" << endl;
    		return;
    	}
    }

    if(cnt0==0 && x%2==0){
    	cout << "NO" << endl;
    	return;
    }

    if(cnt0>=x){
    	if(cnt1>=1){
    		cout << "YES" << endl;
    		return;
    	}
    }
    else{
    	int y = x - cnt0;
    	if(y%2!=0){
    		if(cnt1>=y){
    		cout << "YES" << endl;
    		return;
    		}
    	}
    	else{
    		if(cnt1>=y+1){
    			cout << "YES" << endl;
    			return;
    		}
    	}
    }

    cout << "NO" << endl;
    return;
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
