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
    int n;
    cin >> n;

    vector<int> w(n);
    for(auto &it:w) cin >> it;

    ll ls = w[0];
	ll rs = w[n-1];
	ll i = 0;
	ll j = n-1;

	ll ans = 0;
	while(i<j){
		if(ls<rs){
			i++;
			if(i==j) break;
			ls+= w[i];
		}
		else if(ls>rs){
			j--;
			if(i==j) break;
			rs += w[j];
		}
		else{
			ans = max(ans,i+1+n-j);
			i++; j--;
			if(i>=j) break;
			ls += w[i];
			rs += w[j];
		}
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
