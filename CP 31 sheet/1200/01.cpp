/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    vector<pair<ll,ll>> a(n), b(n), c(n);
    for(int i=0; i<n; i++){
    	cin >> a[i].first;
    	a[i].second = i+1;
    }
    for(int i=0; i<n; i++){
    	cin >> b[i].first;
    	b[i].second = i+1;
    }
    for(int i=0; i<n; i++){
    	cin >> c[i].first;
    	c[i].second = i+1;
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());



    ll ans = 0;
    ll curr = 0;
    for(int i=0; i<3; i++){

    	for(int j=0; j<3; j++){
    		if(a[i].second!=b[j].second){
    			for(int k=0; k<3; k++){
	    			if((a[i].second!=c[k].second) && (b[j].second!=c[k].second)){
		    			ans = max(ans, a[i].first + b[j].first + c[k].first);
		    		}
    			}
    		}
    	}
    }

    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}