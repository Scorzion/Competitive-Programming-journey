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

    int len = 1;
    for(int i=0; i<n-1; i++){
    	if(s[i] != s[i+1]) len++;
    }

    cout << ((len==2)? 2:1) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}