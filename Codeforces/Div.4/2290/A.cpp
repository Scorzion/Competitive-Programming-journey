#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    vector<int> a(3);
    for(auto &it:a) cin >> it;

    sort(all(a));

	bool chk = 1;
	if(a[0]==a[1]-1 && a[1]==a[2]-1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
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