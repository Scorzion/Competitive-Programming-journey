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

bool checker(ll mid, ll cows[], ll n, ll k){
	ll cnt = 1;
	ll pointer = 0;
	for(int i=1; i<n; i++){
		if(cows[i]-cows[pointer]>=mid){
			pointer = i;
			cnt++;
		}
	}
	return cnt >= k;
}

void solve(){
    ll n, k;
    cin >> n >> k;

    ll cows[n];
    for(int i=0; i<n; i++){
    	cin >> cows[i];
    }

    ll l = INT_MAX;
    for(int i=0; i<n; i++){
    	l = min(l,cows[i+1]-cows[i]);
    }

    ll h = cows[n-1]-cows[0];

    ll ans;
    while(l<=h){
    	ll mid = (l+h)/2;

    	if(checker(mid, cows, n, k)){
    		ans = mid;
    		l = mid+1;
    	}
    	else{
    		h = mid-1;
    	}
    }

    cout << ans << endl;
    return;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
