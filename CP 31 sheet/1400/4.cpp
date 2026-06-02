/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
#include <climits>
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
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    if(k>=3){
    	cout << 0 << endl;
    	return;
    }

    vector<ll> diff;
    for(int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			diff.pb(abs(a[i]-a[j]));
		}
	}

	sort(diff.begin(),diff.end());

	ll ans = LLONG_MAX;
	for(int i=0; i < n; i++) {
		ans = min(ans, a[i]);
	}

	ans = min(ans, diff[0]);

	if (k == 2) {
		// With two operations: first append some d in differences, then append |ai - d|.
		// The best achievable is min over i of the closest d to ai, i.e., minimize |ai - d|.
		for(int i = 0; i < n; i++) {
			auto it = lower_bound(diff.begin(), diff.end(), a[i]); // find first d >= ai
			if(it != diff.end()){
				ans = min(ans,abs(*it-a[i]));
			}
			if(it != diff.begin()){
				--it; // check the closest d < ai
				ans = min(ans, abs(*it - a[i]));
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