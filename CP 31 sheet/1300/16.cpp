#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for(auto &it:a) cin >> it;

    vector<int> wcnt(21, 0);
	for(int i=0; i<n; i++) wcnt[log2(a[i])]++;

	int ans = 0;
	int used = 0;

	while(used<n){
		int tmp = w;
		for(int i=20; i>=0; i--){
			while(wcnt[i]>0 && (1<<i)<=tmp){
				tmp -= (1<<i);
				wcnt[i]--;
				used++;
			}
		}
		ans++;
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