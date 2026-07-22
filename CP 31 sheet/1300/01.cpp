/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    vector<pair<int,int>> p(n);
    
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	p[i].first = a[i]%y;
    	p[i].second = a[i]%x;
    }

    sort(p.begin(),p.end());

    map<int,int> mp;

    ll ans = 0;

    mp[p[0].second]++;
    for(int i=1; i<n; i++){
    	if(p[i].first!=p[i-1].first){
    		mp.clear();
    	}
    	
    	
		if(mp.find((x-p[i].second)%x)!=mp.end()){
			ans += mp[(x-p[i].second)%x];
		}
		mp[p[i].second]++;
    }

 
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}