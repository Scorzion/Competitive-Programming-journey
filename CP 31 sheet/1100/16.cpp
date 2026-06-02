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

    vector<ll> c(n);
    for(auto &it:c) cin >> it;

    sort(c.begin(),c.end());
	ll val = 1;
	bool flag = 1;

	if(n==1 && c[0]!=1){
		flag = 0;
	}
	else{
		for(int i=1; i<n; i++){
			if(val<c[i]){
				flag = 0;
				break;
			}
			else{
				val += c[i];
			}
		}
	}

	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

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