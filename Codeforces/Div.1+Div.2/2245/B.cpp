#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
   	ll n, c;
   	cin >> n >> c;

   	vector<ll> a(n);

   	ll cnt = 0;

   	for(auto &it:a){
   		cin >> it;
   		it -= c;

   		if(it<0) cnt++;
   	}


   	sort(a.begin(),a.end());

   	ll score = 0;
   	for(int i=0; i<min(cnt,(n+1)/2); i++){
   		score += a[n-1-i];
   	}



   	if(cnt<(n+1)/2){
   		for(int i=cnt; i<n-cnt; i++){
   			score += a[i];
   		}
   	}

   	cout << score << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}