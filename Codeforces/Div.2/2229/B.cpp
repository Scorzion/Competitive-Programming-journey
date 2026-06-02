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

    vector<ll> a(n);
    vector<ll> b(n);

    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

    ll sum = 0;
    for(int i=0; i<n; i++){
    	if(b[i]<a[i]){
    		swap(a[i],b[i]);
    	}
    	sum += b[i];
    }

    ll mx = LLONG_MIN;
    for(int i=0; i<n; i++){
    	mx = max(mx,a[i]);
    }

    cout << sum + mx << endl;
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