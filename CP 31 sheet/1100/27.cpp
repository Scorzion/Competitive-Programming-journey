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
    ll n, k;
    cin >> n >> k;

    set<ll> st;

    bool flag = 0;
    for(int i=0; i<n; i++){
    	ll x;
    	cin >> x;

    	st.insert(x);
    	if(st.find(x+k)!=st.end() || st.find(x-k)!=st.end()){
    		flag = 1;
    	}
    }

    cout << (flag? "YES": "NO") << endl;

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