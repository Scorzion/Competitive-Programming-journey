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
    for(auto &it:a) cin >> it;

    ll x =0;
    ll p =0;
	ll q =1;
	int k = n-1;

	for(int i=1; i<=n-1; i++){
		if(i==n-1){
			x = max(x+a[p],x-a[q]);
			break;
		}
		if(a[q]<0){
			x -= a[q];
			cout << x << endl;
			q++;
		}
		else{
			
				x+= a[p];
	
				p=q;
				q++;
		}
	}

	cout << x << endl;
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
