#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll n, m;
    cin >> n >> m;

    if(m/n==0){
    	cout << "NO" << endl;
    }
    else{
    	
    	if(m%n==0){
    		cout << "YES" << endl;
    		for(int i=0; i<n; i++){
    			cout << m/n << " ";
    		}
    		cout << endl;
    	}
    	else{
    		if(n & 1){
    			cout << "YES" << endl;
    			for(int i=0; i<n-1; i++){
    				cout << m/n << " ";
    			}
    			cout << m/n + m%n << endl;
    		}
    		else{
    			if((m%n) & 1){
    				cout << "NO" << endl;
    			}
    			else{
    				cout << "YES" << endl;
    				for(int i=0; i<n-2; i++){
    					cout << m/n << " ";
    				}
    				cout << m/n + (m%n)/2 << " ";
    				cout << m/n + (m%n)/2 << endl;
    			}
    		}
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