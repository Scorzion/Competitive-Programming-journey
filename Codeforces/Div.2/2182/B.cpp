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
   	ll a, b;
   	cin >> a >> b;

   	ll x = min(a,b);
   	ll y = max(a,b);

   	vector<ll> v = {1, 4, 16, 64, 256, 1024, 4096, 16384, 65536, 262144, 1048576, 4194304};
   	
   	vector<ll> prev(12);

   	prev[0] = v[0];
   	for(int i=1; i<12; i++){
   		prev[i] += prev[i-1] + v[i];
   	}

   	for(ll i=0; i<12; i++){
   		if(x<prev[i]){
   			 x = i;

   			break;
   		}
   	}

   	vector<ll> s = {2, 8, 32, 128, 512, 2048, 8192, 32768, 131072, 524288, 2097152, 8388608};

   	vector<ll> pres(12);
   	pres[0] = s[0];
   	for(int i=1; i<12; i++){
   		pres[i] = pres[i-1] + s[i];
   	}

   	for(ll i=0; i<12; i++){
   		if(y<pres[i]){
   			y = i;

   			break;
   		}
   	}

   	ll ans1 = 0;
   	if(y>=x){
   		ans1 = 2*x;
   	}
   	else{
   		ans1 = 2*x-1;
   	}

   	y = min(a,b);
   	x = max(a,b);

   	for(ll i=0; i<12; i++){
   		if(y<pres[i]){
   			y = i;
   			break;
   		}
   	}

   	for(ll i=0; i<12; i++){
   		if(x<prev[i]){
   			 x = i;
   			break;
   		}
   	}
  
   	ll ans2 = 0;
   	if(x>y){
   		ans2 = 2*y+1;
   	}
   	else{
   		ans2 = 2*y;
   	}

   	cout << max(ans1,ans2) << endl;



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
