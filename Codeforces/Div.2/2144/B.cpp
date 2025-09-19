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

    vector<int> p(n);
    vector<int> check(n+1,0);
    map<int,int> m;
    for(int i=0; i<n; i++){
    	cin >> p[i];
    	check[p[i]]++;
    }

    vector<int> s;
    for(int i=1; i<n+1; i++){
    	if(check[i]==0){
    		s.pb(i);
    	}
    }


    sort(s.rbegin(),s.rend());


    int k=0;
    for(int i=0; i<n; i++){
    	if(p[i]==0){
    		p[i] = s[k];
    		k++;
    	}
    }



    int ans = 0;
    for(int i=0; i<n; i++){
    	if(p[i]!=i+1){
    		ans = n-i;
    		break;
    	}
    }

    for(int i=n-1; i>=0; i--){
    	if(p[i]!=i+1){
    		ans -= n - i -1;
    		break;
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
