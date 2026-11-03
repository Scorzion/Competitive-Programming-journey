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

    map<char,int> mp;
    int mx = 0;
    for(int i=0; i<n; i++){
    	mp[s[i]]++;
    	mx = max(mx, mp[s[i]]);
    }

    if(mx >= n-mx){
    	cout << n - 2*(n-mx) << endl;
    }
    else{
    	if(n%2==0){
    		cout << 0 << endl;
    	}
    	else{
    		cout << 1 << endl;
    	}
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