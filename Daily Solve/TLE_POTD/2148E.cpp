#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int,int> mp;
    for(auto &it:a){
    	cin >> it;
    	mp[it]++;
    }

    map<int,int> sz;
    int wide = 0;
    for(auto it:mp){
    	if(it.second%k!=0){
    		cout << 0 << endl;
    		return;
    	}
    	else{
    		sz[it.first] = mp[it.first]/k;
    		wide += mp[it.first]/k;
    	}
    }

    ll ans = n;
    map<int,int> tmp;
    int l = 0;
    for(int r=0; r<n; r++){
    	tmp[a[r]]++;
    	while(tmp[a[r]]>sz[a[r]]){
    		tmp[a[l]]--;
    		l++;
    	}
    	ans += r-l;
    }

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}