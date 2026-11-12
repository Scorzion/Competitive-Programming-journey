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

    int ans = 0;
    char ch = 'R';
    for(int i=0; i<n; i++){
    	if(s[i]!=ch){
    		ans++;
    		ch = s[i];
    	}

    	if(ch=='R'){
    		ch = 'B';
    	}
    	else ch = 'R';
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