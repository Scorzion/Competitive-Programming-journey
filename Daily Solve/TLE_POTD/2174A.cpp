#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    string s;
    cin >> s;

    string t;
    cin >> t;

    map<char,int> mp;
    for(int i=0; i<sz(t); i++){
    	mp[t[i]]++;
    }

    for(int i=0; i<sz(s); i++){
    	mp[s[i]]--;
    	if(mp[s[i]]<0){
    		cout << "Impossible" << endl;
    		return;
    	}
    }

    t = " ";
    for(auto it:mp){
    	if(it.second>0){
    		while(it.second){
    			t+=it.first;
    			it.second--;
    		}
    	}
    }

    string ans =" ";
    int k = 0;

    for(int i=0; i<sz(t); i++){
    	while(s[k]<=t[i] && k<sz(s)){
    		ans += s[k];
    		k++;
    	}

    	ans += t[i];
    }

    for(int i=2; i<sz(ans); i++){
    	cout << ans[i];
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