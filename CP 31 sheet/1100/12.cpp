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

const ll mod = 1e9+7;

void solve(){
	ll n;
	cin >> n;

	vector<ll> a(n),b(n);
	for(auto &it:a) cin >> it;
	for(auto &it:b) cin >> it;

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	vector<ll> freq(n,0);

	int j = n-1;
	for(int i=n-1; i>=0; i--){
		while(b[i]<a[j] && j>=0){
			freq[i]++;
			j--;
		}

		if(j<0){
			break;
		}
	}

	ll ans = freq[n-1];
	for(int i=n-2; i>=0; i--){
		freq[i] += (freq[i+1]-1);
		ans = ((ans%mod)*(freq[i]%mod))%mod;
	}

	cout << ans%mod << endl;
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