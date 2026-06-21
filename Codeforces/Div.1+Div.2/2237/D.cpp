#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll cnt1 = 0;
    ll cnt0 = 0;
    for(int i=0; i<n; i++){
    	if(s[i]=='1') cnt1++;
    	else cnt0++;
    }

    ll ans = 0;
    for(int i=0;i<n;i++){
    	int x = cnt1;
    	int y = cnt0;
    	for(int j=n-1; j>i; j--){
    		
    	}
    	
    	if(s[i]=='1') cnt1 = x-1;
    	else cnt0 = y-1;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}