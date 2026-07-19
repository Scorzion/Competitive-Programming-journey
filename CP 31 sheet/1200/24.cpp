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

    int cnt = 0;
    for(int i=0; i<n; i++){
    	if(s[i]=='0') cnt++;
    }

    if(cnt==0){
    	cout << "DRAW" << endl;
    	return;
    }

    if((n & 1) && (s[n/2]=='0')){
		if(cnt==1){
			cout << "BOB" << endl;
		}
		else{
			cout << "ALICE" << endl;
		}
    }
    else{
    	cout << "BOB" << endl;
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