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

    map<int,int> m;
    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;

    	m[x]++;
    }


    vector<int> v;
    int maxi = INT_MIN;

    for(auto it:m){
    	v.pb(it.second);
    }

    sort(v.begin(),v.end());

    int cnt = m.size();
    for(int i=0; i<v.size(); i++){
    	maxi = max(maxi, cnt*v[i]);
    	cnt--;
    }

    cout << maxi << endl;

    
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
