/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

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

    vector<int> a(n);
    for(auto &it:a) cin >> it;


    ll ans = 0;
    for(int i=n-2; i>=0; i--){
    	while(a[i]){
    		if(a[i]<a[i+1]){
    			break;
    		}
    		a[i] /= 2;
    		ans++;
    	}

    	if(a[i]== 0 && i>0){
    		cout << -1 << endl;
    		return;
    	}

    	if(a[i+1]== a[i] && a[i]==0){
    		cout << -1 << endl;
    		return;
    	}
    }

    cout << ans << endl;
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
