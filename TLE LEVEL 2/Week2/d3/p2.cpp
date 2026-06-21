#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    vector<bitset<32>> v(n);
    for(int i=0; i<n; i++){
    	int x;
    	cin >> x;
    	v[i] = x;
    }

    vector<bitset<32>> vc(n,0);
    for(int j=0; j<32; j++){
    	bool check = 0;
    	for(int i=0; i<n; i++){
    		if(v[i][j] && !check){
    			check = 1;
    		}

    		if(check && !v[i][j]){
    			vc[i][j] = 1;
    		}
    	}
    }

    vector<ull> ans;
    for(const auto& bits : vc) {
        ans.pb(bits.to_ullong());
    }

    for(auto it:ans){
    	cout << it << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}