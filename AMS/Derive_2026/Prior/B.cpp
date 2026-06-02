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

bool compare(vector<int>& a, vector<int>& b) {
    double a1 = (1.0 * a[0]) / a[1];
    double b1 = (1.0 * b[0]) / b[1];
    return a1 > b1;
}

void solve(){
    ll n, k, F;
    cin >> n >> k >> F;

    vector<pair<ll,ll>> v(n);
    for(auto &it:v) cin >> it.second >> it.first;

    sort(v.begin(),v.end());
	
	ll time = 0;
	ll delay = 0;
	for(int i=0; i<n; i++){
		time += v[i].second;
		delay = max(0*1LL,time-v[i].first);

		if((i+1)%k==0){
			time += F;
		}
	}

	cout << delay << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    solve();
    
    return 0;
}