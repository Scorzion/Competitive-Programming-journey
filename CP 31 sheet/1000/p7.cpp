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

void solve(){
    int n;
    cin >> n;

    vector<int> a(n),b(n);

    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

    if(n==1){
    	if(a[0]==b[0]) cout << 2 << endl;
    	else cout << 1 << endl;
    	return;
    }

    map<int,int> mp1;
	int cnt = 1;
	for(int i=1; i<n;i++){
		if(a[i]==a[i-1]) cnt++;
		else{
			mp1[a[i-1]] = max(mp1[a[i-1]],cnt);
			cnt = 1;
		}

	}


	if(a[n-1]==a[n-2]){
		mp1[a[n-2]] = max(mp1[a[n-2]],cnt);
	}
	else{
		mp1[a[n-1]] = max(mp1[a[n-1]],cnt);
	}



	map<int,int> mp2;
	cnt = 1;
	for(int i=1; i<n;i++){
		if(b[i]==b[i-1]) cnt++;
		else{
			mp2[b[i-1]] = max(mp2[b[i-1]],cnt);
			cnt = 1;
		}
	}

	if(b[n-1]==b[n-2]){
		mp2[b[n-2]] = max(mp2[b[n-2]],cnt);
	}
	else{
		mp2[b[n-1]] = max(mp2[b[n-1]],cnt);
	}



	ll ans = 0;
	for(auto it:mp1){
		int x = it.first;
		ans = max(ans, (ll)it.second+mp2[x]);
	}

	for(auto it:mp2){
		int x = it.first;
		ans = max(ans, (ll)it.second+mp1[x]);
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
