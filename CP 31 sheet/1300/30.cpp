#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    vector<long double> a(n);
    for(auto &it:a) cin >> it;

    long double sum = 0;
	for(int i=0; i<k; i++){
		sum += a[i];
	}
	long double cnt = 1;
	long double curr = 0;

	long double ans = sum;

	for(int i=k; i<n; i++){
		curr = sum-a[cnt-1]+a[i];
		ans += curr;
		sum = curr;
		cnt++;
	}

	cout << fixed << setprecision(10) << ans/cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}