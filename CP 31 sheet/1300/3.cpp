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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    vector<ll> odd(n,0),even(n,0);
	for(int i=0; i<n; i++){
		if(i & 1){
			even[i] = a[i];
		}
		else{
			odd[i] = a[i];
		}
	}

	map<ll,ll> mp;
	mp[odd[0]-even[0]]++;
	for(ll i=1; i<n; i++){
		even[i] += even[i-1];
		odd[i] += odd[i-1];
		mp[odd[i]-even[i]]++;

		if(odd[i]-even[i]==0){
			cout << "YES" << endl;
			return;
		}
		if(mp[odd[i]-even[i]]>1){
			cout << "YES" << endl;
			return;
		}


	}

	cout << "NO" << endl;
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