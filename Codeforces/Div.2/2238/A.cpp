#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

  	int ans1 = 0;
  	for(int i=0; i<n; i++){
  		if(a[i]-b[i]>0){
  			ans1 += (a[i]-b[i]);
  		}

  		if(a[i]-b[i]<0){
  			ans1 = INT_MAX;
  			break;
  		}
  	}

  	int ans2 = c;
  	sort(a.begin(),a.end());
  	sort(b.begin(),b.end());

  	for(int i=0; i<n; i++){
  		if(a[i]-b[i]>0){
  			ans2 += (a[i]-b[i]);
  		}

  		if(a[i]-b[i]<0){
  			ans2 = INT_MAX;
  			break;
  		}
  	}

  	if(ans1==INT_MAX && ans2==INT_MAX){
  		cout << -1 << endl;
  	}
  	else{
  		cout << min(ans1,ans2) << endl;
  	}

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}