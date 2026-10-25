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

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    int ans = 0;
	int j = 0;
	int tmp = 0;
	for(int i=0; i<n; i++){
		if(a[i]==a[i+1]){
			j++;
		}
		else{
			tmp = i*a[i];
			tmp += (n-i-j-1)*a[i];
			j = 0;
		}
		ans = max(ans,tmp);
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