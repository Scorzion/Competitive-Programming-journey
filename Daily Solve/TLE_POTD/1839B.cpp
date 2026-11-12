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

    vector<pair<int,int>> v(n);
    for(auto &it:v){
    	cin >> it.first;
    	cin >> it.second;
    }

    sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b){
    	if(a.first!=b.first) return a.first<b.first;
    	return a.second>b.second;
    });


    int x = 0;
    ll ans = 0;
    int tmp = 0;
    int last = -1;

    map<int,int> mp;
    for(int i=0; i<n; i++){
    	if(v[i].first==last){
    		continue;
    	}
    	tmp = 0;
    	for(auto it=mp.begin(); it!=mp.end(); ){
    		if(it->first<=x){
    			tmp += it->second;
    			it = mp.erase(it);
    		}
    		else{
    			break;
    		}
    	}
    	x = x-tmp;

    	if(v[i].first>x){
    		ans += v[i].second;
    		x++;
    		mp[v[i].first]++;

    		if(v[i].first==x){
    			last = v[i].first;
    		}
    	}
    	else{
    		last = v[i].first;
    	}
    	
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