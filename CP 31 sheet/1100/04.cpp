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

ll max_sum(ll l, ll r, vector<pair<ll,ll>>& a) {
    ll curr = 0, best = LLONG_MIN;

    for(ll i=l; i<=r; i++){
        curr = max(a[i].first, curr + a[i].first);
        best = max(best, curr);
    }
    return best;
}

void solve(){
    ll n;
    cin >> n;

    vector<pair<ll,ll>> a(n);
    for(auto &it:a){
    	cin >> it.first;
    	it.second = 0;
    }

    ll x = 1;
    a[0].second = 1;
    for(int i=1; i<n ;i++){
    	if(abs(a[i-1].first)%2!=abs(a[i].first)%2){
    		a[i].second = x;
    	}
    	else{
    		x++;
    		a[i].second = x;
    	}
    }

    vector<pair<ll,ll>> s;
    int l = 0;
    int r = 0;
    bool flag = 0;
    for(int i=0; i<n-1; i++){
    	if(!flag){
    		l = i;
    		r = i;
    		flag = 1;

    		if(a[i].second!=a[i+1].second){
    			s.pb({l,r});
    			flag = 0;
    		}
    	}
    	else{
    		if(a[i].second!=a[i+1].second){
    			r = i;
    			s.pb({l,r});
    			flag = 0;
    		}
    	}
    }


    if(a[n-2].second!=a[n-1].second){
    	l = n-1;
    }
    s.pb({l,n-1});

    ll ans = LLONG_MIN;
    for(int i=0; i<s.size(); i++){
    	ans = max(ans,max_sum(s[i].first,s[i].second,a));
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
