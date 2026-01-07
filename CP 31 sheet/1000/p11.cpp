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
    int n, d;
    cin >> n >> d;

    vector<int> p(n);
    for(auto &it:p) cin >> it;

    sort(p.rbegin(),p.rend());
	ll ans = 0;

	int sz = 0;
	int k = n;
	for(int i=0; i<k; i++){
		if(p[i]>d) ans++;
		else{
			sz = d/p[i]+1;
			k -= (sz-1);
			if(k>i && sz*p[i]>d) ans++;
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
