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
 	ll n,l,r;
 	cin>>n>>l>>r;

 	map<ll,ll> mp;

 	for(ll i = 1; i <= n; i++){
 		ll rem = (l%i);
 		ll req = (i - rem)%i;

 		if(l+req <= (r)){
 			mp[i] = l + req;
 		}
 	}

 	if(mp.size() < n){
 		cout << "NO\n";
 		return;
 	}

 	cout << "YES\n";

 	for(ll i=1;i<=n;i++){
 		cout << "(" <<  i << " " << mp[i] << "), ";
 	}
 	cout << endl;
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