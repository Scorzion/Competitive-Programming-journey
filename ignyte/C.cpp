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
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0; i<n; i++){
    	cin >> a[i];

    	if(a[i]==1){
    		cnt1++;
    	}
    	else{
    		cnt2++;
    	}
    }
    
  
    int ans = 0;
    if(cnt1>=cnt2){
    	ans += cnt2;
    	cnt1 -= cnt2;

    	cnt1 /= 3;
    	ans += cnt1;

    	cout << ans << endl;
    }
    else{
    	ans += cnt1;
    	cout << ans << endl;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


        solve();
    
    return 0;
}
