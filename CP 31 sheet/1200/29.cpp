#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    if(n & 1){
    	int len = n/2;
    	int cyc = (k-1)/len;
    	if((k+cyc)%n){
    		cout << (k+cyc)%n << endl;
    	}
    	else{
    		cout << n << endl;
    	}
    	
    }
    else{
    	if(k%n){
    		cout << k%n << endl;
    	}
    	else{
    		cout << n << endl;
    	}
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}