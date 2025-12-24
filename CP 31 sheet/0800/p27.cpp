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

    int cnt1 = 0;
    int cnt2 = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	if(a[i]==1){
    		cnt1++;
    	}
    	else{
    		cnt2++;
    	}
    }

    if(cnt1==n){ 
    	cout << 1 << endl;
    	return;
    }

    if(cnt2%2==1){
    	cout << -1 << endl;
    }
    else{
    	int cnt = 0;
    	for(int i=0; i<n; i++){
    		if(a[i]==2){
    			cnt++;
    		}

    		if(cnt == cnt2/2){
    			cout << i+1 << endl;
    			return;
    		}
    	}
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
