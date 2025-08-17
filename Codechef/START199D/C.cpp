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

    sort(a.begin(), a.end());

    int y = 0;
    int cnt = 1;

    int cnt_1 = 0;
    for(int i=0; i<n-1; i++){
    	if(a[i]==a[i+1]){
    		cnt++;
    	}
    	else{
    		y = max(cnt,y);
    		cnt=1;
    	}

    	if(a[i]==1){
    		cnt_1++;
    	}
    }

    if(a[n-1]==1){
    	cnt_1++;
    }
    
    y = max(cnt,y);
    if(cnt_1==y){
    	cout << n - cnt_1 << endl;
    	return;
    }

    cout << n - y + 1 << endl;
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
