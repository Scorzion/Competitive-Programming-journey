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

    char c;
    cin >> c;

    string s;
    cin >> s;

    int ans = INT_MIN;
    bool checkg = 0;
    int cnt = 0;

    for(int i=2*n-1; i>=0; i--){
    	if(s[i%n]=='g'){
    		checkg = 1;
    		cnt = 0;
    	}
    	
    	if(checkg && s[i%n]!='g') cnt++;

    	if(s[i%n] == c) ans = max(ans,cnt);
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
