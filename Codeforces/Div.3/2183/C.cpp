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
    ll n, k;
    cin >> n >> k;
    ll x = n;
    if(n==k){
    	cout << 0 << endl;
    	return;
    }

    bool flag1 = 0;
    ll ans1 = 0;
    ll n1 = 0;
    ll n2 = 0;
    while(true){
    	ans1++;
    	n1 = n/2;

    	if(n%2==0){
    		n2 = n1;
    		n = n1;
    	}
    	else{
    		n2 = (n/2) + 1;
    		n = n2;
    	}
    
    	if(n==k || n1==k || n2==k){
    		flag1=1;
    		break;
    	}

    	if(n<k){
    		break;
    	}
    }

    bool flag2 = 0;
    ll ans2 = 0;
    n1 = 0;
    n2 = 0;
    n = x;
    while(true){
    	ans2++;
    	n1 = n/2;

    	if(n%2==0){
    		n2 = n1;
    		n = n1;
    	}
    	else{
    		n2 = (n/2) + 1;
    		n = n1;
    	}
    	
    	if(n==k || n1==k || n2==k){
    		flag2 = 1;
    		break;
    	}

    	if(n<k){
    		break;
    	}
    }

    if(flag1 && flag2){
    	cout << min(ans1,ans2) << endl;
    }
    else if(flag1){
    	cout << ans1 << endl;
    }
    else if(flag2){
    	cout << ans2 << endl;
    }
    else{
    	cout << -1 << endl;
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
