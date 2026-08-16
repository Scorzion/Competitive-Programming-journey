#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){

	int x, y, z, w;
   	cout << "?" << 1 << " " << 1 << endl;
   	cout << "?" << 2 << " " << 2 << endl;
   	cout << "?" << 3 << " " << 4 << endl;
   	cout << "?" << 5 << " " << 6 << endl;

   	cin >> x >> y >> z >> w;

   	vector<int> a;
   	a.pb(sqrt(x));
   	a.pb(sqrt(y));


   	cout << ! << " ";

   	for(auto it:a){
   		cout << it << " ";
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