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

    vector<int> validk(n+1,1);

	for(int i=0; i<30; i++){
		vector<int> validFactors(n+1,0);

		int cnt = 0;
		for(int j=0; j<n; j++){
			if(a[j] & (1<<i)){
				cnt++;
			}
		}
		for(int j=1; j<=n; j++){
			if(cnt%j==0){
				validFactors[j]=1;
			}
		}

		for(int j=1; j<=n; j++){
			validk[j] = validk[j] & validFactors[j];
		}
	}

	for(int i=1; i<=n; i++){
		if(validk[i]) cout << i << " ";
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