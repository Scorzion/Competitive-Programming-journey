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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    vector<pair<ll,ll>> at(n);
	for(int i=0; i<n; i++){
		at[i] = {a[i]-k,a[i]+k};
	}

	sort(at.begin(),at.end());
	vector<ll> b(m);
	for(auto &it:b) cin >> it;

	sort(b.begin(),b.end());

	ll ans = 0;
	int last = 0;
	for(int i=0; i<m; i++){
		for(int j=last; j<n; j++){
			if(b[i]>=at[j].first && b[i]<=at[j].second){
				ans++;
				j = last+1;
				break;
			}

			if(b[i]<at[j].first){
				break;
			}
		}
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
