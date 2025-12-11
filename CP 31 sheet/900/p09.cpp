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

    // if(n==2){
    // 	cout << 1 << endl;
    // 	return;
    // }

    vector<pair<int,int>> p;
    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;

    	p.pb({x,i});
    }

    sort(p.begin(),p.end());


    vector<int> a;
    for(int i=0; i<n; i++){
    	int diff = abs(i-p[i].second);

    	if(diff!=0)
    		a.pb(diff);

    }

    int cnt = a[0];
    for(int i=1; i<a.size(); i++){
    	cnt = __gcd(cnt,a[i]);
    }

    cout << cnt << endl;  
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
