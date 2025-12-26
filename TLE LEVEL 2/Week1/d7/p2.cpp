/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O(nlogn)
    SC    - O()
    Logic - 
	when a,b<=1e9
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
    ll n, c;
    cin >> n >> c;

    vector<ll> start(n),end(n),cost(n);
    for(int i=0;i<n;i++){
    	cin >> start[i] >> end[i] >> cost[i];
    }

    set<int> st;
    for(int i=0; i<n;i++){
    	st.insert(start[i]);
    	st.insert(end[i]+1);
    }

    int idx = 0;
    map<int,int> mp;
    for(auto it:st){
    	mp[it] = idx;
    	idx++;
    }

    vector<ll> diff(idx+1,0);
    for(int i=0; i<n; i++){
    	diff[mp[start[i]]] += cost[i];
    	diff[mp[end[i]+1]] -= cost[i];
    }

    for(int i=1; i<=idx; i++){
    	diff[i]+= diff[i-1];
    }

    vector<int> a(st.begin(),st.end());
    ll ans = 0;
    for(int i=1; i<a.size(); i++){
    	ll span = a[i]-a[i-1];
    	ans += min(diff[i-1],c)*span;
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
