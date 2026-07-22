

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

const ll mod = 998244353;

ll fact(ll n)
{
    ll result = 1;
    for(ll i = 2; i <= n; i++)
    {
        result = (result*i)%mod;
    }
    return result;
}

void solve(){
    string s;
    cin >> s;

    vector<ll> num;

    ll cnt = 0;
    for(int i=1; i<s.length(); i++){
    	if(s[i]==s[i-1]){
    		cnt++;
    	}
    	else{
    		if(cnt) num.pb(cnt);
    		cnt = 0;
    	}
    }

    if(cnt) num.pb(cnt);

    // for(auto it:num){
    // 	cout << it << " ";
    // }

    if(num.size()==0){
    	cout << 0 << " " << 1 << endl;
    	return;
    }

    if(num.size()==1){
    	cout << num[0] << " " << fact(num[0]+1) << endl;
    	return;
    }
   

    ll ans1 = num[0];
    ll ans2 = num[0] + 1;
    for(int i=1; i<num.size(); i++){
    	ans1 = (ans1 + num[i])%mod;
    	ans2 = (ans2*(num[i]+1))%mod;
    }
    ans2 = (ans2*fact(ans1))%mod;

    cout << ans1 << " " << ans2 << endl;


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