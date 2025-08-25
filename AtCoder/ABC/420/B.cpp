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
    int n, m;
    cin >> n >> m;

    char s[n][m];
    int k = n;

    int i = 0;
    while(k--){
    	string ss;
    	cin >> ss;

    	for(int j=0; j<m; j++){
    		s[i][j] = ss[j];
    	}
    	i++;
    }


    int cnt0 = 0;
    int cnt1 = 0;

    vector<int> a(n,0);
    for(int j=0; j<m; j++){
    	cnt0 = 0;
    	cnt1 = 0;
    	for(int i=0; i<n; i++){
    		if(s[i][j]=='0'){
    			cnt0++;
    		}
    		else{
    			cnt1++;
    		}
    	}


    	if(cnt0==0 || cnt1==0){
    		for(int i=0; i<n; i++){
    			a[i]++;
    		}
    		continue;
    	}

    	if(cnt0>cnt1){
    		for(int i=0; i<n; i++){
    			if(s[i][j]=='1')
    				a[i]++;
    		}
    		continue;
    	}

    	if(cnt0<cnt1){
    		for(int i=0; i<n; i++){
    			if(s[i][j]=='0')
    				a[i]++;
    		}
    		continue;
    	}

    }

    int ans = INT_MIN;
    for(int i=0; i<n; i++){
    	ans = max(ans, a[i]);
    }



    for(int i=0; i<n; i++){
    	if(a[i]==ans){
    		cout << i+1 << " ";
    	}
    }

    cout << endl;


}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
 
    return 0;
}
