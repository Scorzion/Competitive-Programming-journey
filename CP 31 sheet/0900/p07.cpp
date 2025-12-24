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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    sort(a.begin(),a.end());
    int ans = INT_MAX;


    int flag1 = -1;
    int flag2 = -1;

    int cnt = 0;
    int first = 0;
    for(int i=0; i<n-1; i++){
    	if(a[i+1]-a[i]>k){
    		cnt++;
    		if(flag1==-1){
    			flag1 = i+1;
    			first = flag1;
    		}
    		else{
    			flag2 = i+1;
    			int x = flag1 + n - flag2;
    			ans = min(ans,x);
    			flag1 = flag2;
    			flag2 = -1;
    		}
    	}
    }

    if(flag1==-1){
    	cout << 0 << endl;
    	return;
    }

    if(flag2 == -1 ){
    	if(cnt==1){
    		int x = min(flag1,n-flag1);
    		ans = min(ans,x);
    	}
    	else{
    		ans = min(ans,n-first);
    		ans = min(ans,flag1);
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
