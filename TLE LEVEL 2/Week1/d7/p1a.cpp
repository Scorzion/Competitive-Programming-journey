/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 
	when a,b <=1e6
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

const int N = 1e6+1;
ll diff[N];

void solve(){
    ll n, c;
    cin >> n >> c;

    vector<ll> start(n),end(n),cost(n);
    for(ll i=0; i<n;i++){
    	cin >> start[i] >> end[i] >> cost[i];
    }

    memset(diff,0,sizeof(diff));
    for(ll i=0; i<n;i++){
    	diff[start[i]] += cost[i];
    	diff[end[i]+1] -= cost[i];

    }

    for(ll i=1; i<N; i++){
    	diff[i] += diff[i-1];
    }

    ll ans = 0;
    for(ll i=1; i<N; i++){
    	ans += min(diff[i],c);
    }

    cout << ans << endl;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


     solve();
   
    return 0;
}
