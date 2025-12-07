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

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int ans = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
    	if(a[i]==0){
    		cnt++;
    	}
    	else{
    		ans = max(ans,cnt);
    		cnt = 0;
    	}
    }

    ans = max(ans,cnt);

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
