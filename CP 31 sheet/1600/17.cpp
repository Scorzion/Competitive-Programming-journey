#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    int lf = n, rf = 0;

    vector<ll> val1(n);
    ll curr = 0;
   
   	int l = 0;
   	int r = 0;

   	ll ans = 0;
   	ll cnt = 0;
    for(int i=0; i<n; i++){
    	r = n-(i+1);
    	
    	if(a[i]<0){
    		cnt++;
    	}

    	if(a[i]!=0){
    		val1[i] = log2(abs(a[i])) + curr;
    		curr = val1[i];
    	}
    	else{
    		curr = 0;
    		l = i+1;
    		cnt = 0;
    	}

    	if(val1[i]>ans && cnt%2==0){
    		ans = val1[i];
    		lf = l;
    		rf = r;
    		val1[i] = -1;
    	}
    }

  
    curr = 0;
    cnt = 0;
    vector<ll> val2(n); 
    l = 0; r = 0;
    for(int i=n-1; i>=0; i--){
    	l = i;
    	
    	if(a[i]<0){
    		cnt++;
    	}

    	if(a[i]!=0){
    		val2[i] = log2(abs(a[i])) + curr;
    		curr = val2[i];
    	}
    	else{
    		curr = 0;
    		r = n-i;
    		cnt = 0;
    		val2[i] = -1;
    	}


    	if(val2[i]>ans && cnt%2==0){
    		ans = val2[i];
    		lf = l;
    		rf = r;
    	}
    }

    cout << lf << " " << rf << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}