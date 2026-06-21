#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
    	cout << i << " ";
    }
    for(int i=1; i<=n; i++){
    	cout << i << " " << i << " ";
    }

    if(n%2==0){
    	for(int i=1; i<=n; i++){
    	cout << i << " ";
   		}
    }
    else{
    	for(int i=2; i<=n; i++){
    		cout << i << " ";
    	}
    	cout << 1;
    }

    cout << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}