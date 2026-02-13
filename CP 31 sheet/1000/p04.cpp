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
#include <climits>
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

    ll k = n;

    vector<ll> s;
    ll sum = 0;
    while(k--){
    	ll m;
    	cin >> m;

    	vector<ll> a(m);
    	for(auto &it:a) cin >> it;
    	
    	sort(a.begin(),a.end());

    	s.pb(a[0]);
    	s.pb(a[1]);
    	sum += a[1];
    }
    
    ll mini = LLONG_MAX;
    for(int i=0; i<s.size(); i+=2){
    	mini = min(mini, s[i]);
    }

   	ll ans = sum - s[1] + mini;
    for(int i=1; i<s.size(); i+=2){
    	ans = max(ans, sum-s[i]+mini);
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
