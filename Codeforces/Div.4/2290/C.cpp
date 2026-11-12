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

    map<int,int> mp;
    int ans = 0;
    for(int i=0; i<n; i++){
    	int h;
    	cin >> h;

    	mp[h]++;
    }
    for(auto it:mp){
    	if(it.second>=2){
    		ans += 2;
    	}
    	else{
    		ans += 1;
    	}
    }

    cout << ans << endl;
    for(auto it:mp){
    	int l = it.second/2;
    	for(int i=1; i<=l; i++){
    		cout << it.first << " ";
    	}
    	mp[it.first] -= l;
    }


    for(auto it=mp.rbegin(); it!=mp.rend(); ++it){
    	for(int i=1; i<=it->second; i++){
    		cout << it->first << " ";
    	}
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}