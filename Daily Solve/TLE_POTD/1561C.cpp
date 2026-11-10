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

    vector<pair<int,int>> k(n);
    for(int i=0; i<n; i++){
    	int p;
    	cin >> p;

    	int x = -1;
    	for(int j=0; j<p; j++){
    		int tmp;
    		cin >> tmp;
    		x = max(x, tmp-j+1);
    	}
    	k[i] = {x,p};
    }

    sort(k.begin(), k.end());
    int l = k[0].first;
    int r = k[n-1].first;

    bool chk = 1;
    int mid = l+(r-l)/2;
    while(l<=r){
    	mid = l+(r-l)/2;
    	chk = 1;
    	int t = 0;
    	for(int i=0; i<n; i++){
    		if(mid+t<k[i].first){
    			chk = 0;
    			break;
    		}
    		t += k[i].second;
    	}

    	if(chk){
    		r = mid-1;
    	}
    	else{
    		l = mid+1;
    	}
    }

    cout << l << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}