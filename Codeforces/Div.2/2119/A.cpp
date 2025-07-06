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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if(b>=a){
    	int ans1 = (b-a)*x;
    	int ans2 = 0;

    	if(a%2==b%2){
    		ans2 += ((b-a)/2)*x;
    		ans2 += ((b-a)/2)*y;
    	}
    	else{
    		if(a%2==1){
    			ans2 += (((b-a)/2) + 1) * x;
    			ans2 += ((b-a)/2) * y;
    		}
    		else{
    			ans2 += (((b-a)/2) + 1) * y;
    			ans2 += ((b-a)/2) * x;
    		}
    	}

    	cout << min(ans1,ans2) << endl;
    	return;
    }
    else{
    	if(a-b==1 && a%2==1){
    		cout << y << endl;
    		return;
    	}
    	else{
    		cout << -1 << endl;
    		return;
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
