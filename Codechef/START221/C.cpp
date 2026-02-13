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
    ll n;
    cin >> n;

    vector<int> num;
    ll odd = 0;
    ll maxn = 0;
    
    while(n){
    	num.pb(n%10);
    	if((n%10)%2==1) odd++;
    	if(n%10>maxn) maxn = n%10;
    	n/=10;
    }
   
    ll sz = num.size();
    if(num[0]%2==1){
    	cout << 0 << endl;
    	return;
    }

    if(sz==1){
    	cout << -1 << endl;
    }
    else{
    	if(odd>0){
    		cout << 1 << endl;
    	}
    	else{
    		if(num[0]==0){
    			cout << 2 << endl;
    			return;
    		}
    		
    		if(num[0]==maxn){
    			cout << 3 << endl;
    		}
    		else{
    			cout << 2 << endl;
    		}
    	}
    }
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
