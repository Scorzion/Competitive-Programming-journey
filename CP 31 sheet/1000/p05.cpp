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
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];

    	v[i].first = a[i]%k;
    	v[i].second = i+1;
    }

    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++){
    	if(v[i].first==0) cout << v[i].second << " ";
    	else break;
    }

    reverse(v.begin(),v.end());

    vector<int> s;
    int t = 0;

    for(int i=0; i<n; i++){
    	if(v[i].first==0) break;
    	if(v[i].first!=v[i-1].first && i!=0) t=s.size();
    	s.insert(s.begin()+t,v[i].second);
    }

    for(auto it:s) cout << it << " ";
    cout << endl;
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
