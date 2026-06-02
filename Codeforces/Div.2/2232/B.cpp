/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
#include <climits>
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
    for(auto &it:a){
    	cin >> it;
    }

    vector<ll> pre(n,0);
    pre[0] = a[0];

    for(int i=1; i<n; i++){
    	pre[i] = pre[i-1] + a[i];
    }

    vector<ll> ans(n);
    ll mn = a[0];
    ll mx = a[0];
    ans[0] = a[0];

    for(int i=1; i<n; i++){
    	mn = min(mn,a[i]);
    	mx = max(mx,a[i]);

    	if(mn==mx){
    		ans[i] = mn;
    	}
    	else{
    		ll val = pre[i]/(i+1);
    		if(val<=ans[i-1]){
    			ans[i] = val;
    		}
    		else{
    			ans[i] = ans[i-1];
    		}
    	}
    }

    for(auto it:ans){
    	cout << it << " ";
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