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

    vector<int> a(n);
    for(auto &it:a){
    	cin >> it;
    }

    vector<ll> pre(n,0);
    pre[0] = abs(a[0]);
    for(int i=1; i<n; i++){
    	pre[i] = pre[i-1] + abs(a[i]);
    }

    vector<ll> suf(n+1,0);
    suf[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--){
    	suf[i] = suf[i+1] + a[i];
    }

    int idx = -1;
    ll best = suf[0];
    ll score = 0;


    for(int i=1; i<n; i++){
    	if(a[i]>0){
    		score = pre[i-1] + suf[i+1] -a[i];
	    	if(score>best){
	    		idx = i;
	    		best = score;
	    	}
    	}
    	
    }

    if(idx==-1){
    	cout << 0 << endl;
    	cout << endl;
    	return;
    }

    vector<int> ans;
    for(int i=idx-1; i>=0; i--){
    	if(ans.size()&1) a[i]=-a[i];
    	if(a[i]>0) ans.pb(i);
    }

    ans.pb(idx);

    cout << ans.size() << endl;

    for(int i=0; i<ans.size(); i++){
    	cout << ans[i]+1 << " ";
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