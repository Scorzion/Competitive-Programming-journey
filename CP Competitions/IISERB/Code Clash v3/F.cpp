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

    vector<ll> a(n);
    for(auto &it:a){
    	cin >> it;
    }

    ll x = 1;
    ll y = n;

    ll l = 0;
    ll r = n-1;

    bool flag1 = 0;
    bool flag2 = 0;
    while(l<=r){
    	
    	flag1 = 0;
    	flag2 = 0;
    	if(a[l]==x && flag1==0){
    	
    		x++;
    		l++;
    		flag1 = 1;
    	}

    	if(a[l]==y && flag1==0){
    		y--;
    		l++;
    		flag1 = 1;
    	}

    	if(a[r]==x && flag2 ==0){
    		
    		x++;
    		r--;
    		flag2 = 1;
    	}

    	if(a[r]==y && flag2 ==0){
    		y--;
    		r--;
    		flag2 = 1;
    	}

    	if(flag1==0 && flag2==0){
    		break;
    	}
    }

	if(l>=r || abs(l-r)==1){
		cout << -1 << endl;
	}
	else{
		cout << l+1 << " " << r+1 << endl;
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
