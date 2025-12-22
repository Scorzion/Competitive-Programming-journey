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

    vector<int> v(n);
    for(auto &it:v) cin >> it;

    map<int,int> mp;

	int ans = 0;
	ll sum = 0;

	for(int i=0; i<n; i++){
		if(v[i]==1) sum+= 1;
		else sum -= 1;

		if(sum==0){
			ans = i+1;
		}
		else{
			if(mp.find(sum)!=mp.end()){
				ans = max(ans,i-mp[sum]);
			}
			else{
				mp[sum] = i;
			}
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
