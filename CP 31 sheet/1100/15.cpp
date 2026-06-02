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
    string s;
    cin >> s;

    ll n = s.size();
    vector<char> v(2*n);

    ll mx = 0;
    ll tmp = 0;
    bool chk = 0;
    for(int i=0; i<2*n; i++){
    	v[i] = s[i%n];

    	if(v[i]=='1'){
    		tmp++;
    	}
    	else{
    		chk = 1;
    		mx = max(mx,tmp);
    		tmp = 0;
    	}hhybvcby
    }

    mx = max(mx,tmp);
    if(mx==2*s.size()) mx/=2;

    if(!chk){
    	cout << mx*mx << endl;
    }
    else{
    	ll x = 0;
    	if(mx%2){
    		x = (mx+1)/2;
    		cout << x*x << endl;
    	}
    	else{
    		x = mx/2;
    		cout << x*(x+1) << endl;
    	}
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