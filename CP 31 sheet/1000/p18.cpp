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
    ll w, h;
    cin >> w >> h;

    ll ans = INT_MIN;
    ll k1;
    cin >> k1;
    vector<ll> v1(k1);
    for(auto &it:v1) cin >> it;
    ll b1 = v1[k1-1]-v1[0];
	b1*=h;
	ans = max(ans,b1);

    ll k2;
	cin >> k2;
	vector<ll> v2(k2);
	for(auto &it:v2) cin >> it;
	ll b2 = v2[k2-1]-v2[0];
	b2*=h;
	ans = max(ans,b2);

	ll k3;
	cin >> k3;
	vector<ll> v3(k3);
	for(auto &it:v3) cin >> it;
	ll b3 = v3[k3-1]-v3[0];
	b3*=w;
	ans = max(ans,b3);

	ll k4;
	cin >> k4;
	vector<ll> v4(k4);
	for(auto &it:v4) cin >> it;
	ll b4 = v4[k4-1]-v4[0];
	b4*=w;
	ans = max(ans,b4);

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
