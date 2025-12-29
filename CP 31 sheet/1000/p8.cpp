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

    string s;
    cin >> s;

    map<char,int> mp;
    int cnt2 = 0;
    for(int i=0;i<n;i++){
    	mp[s[i]]++;
    	if(mp[s[i]]==1){
    		cnt2++;
    	}
    }
   	// cout << cnt2 << endl;

    int ans = 0;
    map<char,int> m;
    int cnt1 =0;
    for(int i=0;i<n;i++){
    	m[s[i]]++;
    	mp[s[i]]--;
    	if(m[s[i]]==1) cnt1++;
    	if(mp[s[i]]==0) cnt2--;
    	ans = max(ans,cnt1+cnt2);
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
