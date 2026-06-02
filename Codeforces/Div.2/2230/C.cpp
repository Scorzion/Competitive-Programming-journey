/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it:v) cin >> it;

    sort(all(v));


	ll ans = 0;
	ll cnt = 0;
	ll one = 0;
	for(int i=0; i<n; i++){
		if(v[i]>1){
			ans += v[i];
			if(v[i]>=4){
				v[i]-=4;
				cnt++;
				cnt += v[i]/2;
			}
		}
		else{
			one++;
		}
	}



	ans += min(one,cnt);
	cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}