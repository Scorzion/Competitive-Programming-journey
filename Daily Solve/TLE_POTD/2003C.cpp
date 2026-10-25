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

    vector<pair<int,int>> v;
    for(int i=0; i<26; i++){
    	v.push_back({0,i});
    }

    for(int i=0; i<n; i++){
    	v[s[i]-'a'].first++;
 	}


    sort(v.rbegin(),v.rend());

    int cnt = 0;
    while(true){
    	cnt = 0;
    	for(int i=0; i<v.size(); i++){
    		if(v[i].first>0){
    			cout << (char) (v[i].second+'a');
    			v[i].first--;
    		}
    		else{
    			cnt++;
    		}
    	}

    	if(cnt==v.size()){
    		break;
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