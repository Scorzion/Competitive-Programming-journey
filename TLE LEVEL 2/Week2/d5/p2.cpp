	#include <bits/stdc++.h>
	using namespace std;

	#define ll long long
	#define pb push_back
	#define all(x) x.begin(), x.end()
	#define sz(x) (int)x.size()
	#define endl "\n"

	void solve(){
	    ll n, k;
	    cin >> n >> k;

	    ll val = (1LL<<32)-1;
	    vector<bitset<32>> a(n);
	    for(int i=0; i<n; i++){
	    	int x;
	    	cin >> x;
	    	a[i] = x;
	    	val &= x;
	    }


	    vector<int> idx;
	    for(int j=0; j<32; j++){
	    	int cnt = 0;
	    	for(int i=0; i<n; i++){
	    		if(a[i][j]==1) cnt++;
	    	}

	    	idx.pb(n-cnt);
	    }

	    reverse(idx.begin(),idx.end());

	    bitset<32> num(val);
	    for(int i=1; i<32; i++){
	    	if(idx[i]<=k && idx[i]>0){
	    		k -= idx[i];
	    		num[31-i] = 1;
	    	}
	    }

	   
	    cout << num.to_ullong() << endl;
	    


	}

	signed main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);

	    int t;
	    cin >> t;
	    while(t--) solve();
	    return 0;
	}