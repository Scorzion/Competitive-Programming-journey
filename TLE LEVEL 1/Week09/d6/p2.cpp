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
    ll n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    sort(a,a+n);
    int check = abs(a[0]-a[n-1]);

    if(check==0){
    	if(n==2){
    		cout << 2 << endl;
    		return;
    	}
    	else{
    		cout << n*(n-1)*1LL << endl;
    		return;
    	}
    }


    ll cnt_min = 1;
    ll cnt_max = 1;
    for(int i=1; i<n-1; i++){
    	if(a[i]==a[0]){
    		cnt_min++;
    	}

    	if(a[i]==a[n-1]){
    		cnt_max++;
    	}
    }

    if(cnt_min == 1){
    	cout << cnt_max*2*1ll << endl;
    	return;
    }

    if(cnt_max == 1){
    	cout << cnt_min*2*1LL << endl;
    	return;
    }

    ll ans = cnt_min*cnt_max*2*1LL;
    if(ans>1){
    	cout << ans << endl;
    }
    else{
    	cout << 2 << endl;
    }

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
