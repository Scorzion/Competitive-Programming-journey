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
    int n, p;
    cin >> n >> p;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
    	cin >> b[i];
    }

    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
    	v[i].first = b[i];
    	v[i].second = a[i];
    }

    sort(v.begin(), v.end());

    int rest = n;
    int cnt = 0;
    ll ans = 0;
    int i=0;

    while(rest>0){
    	if(i==n-1 || v[i].first!=v[i+1].first){
    		cnt++;
    		rest--;
    		if(v[i].second<=rest){
    			ans += v[i].second*v[i].first;
    			rest -= v[i].second;
    		}
    		else{
    			ans += rest*v[i].first;
    			rest = 0;
    		}
    	}
    	i++;
    }

    ans += cnt*p;
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
