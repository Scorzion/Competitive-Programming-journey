#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll h, w;
    cin >> h >> w;

    if((w*100*100)/(h*h)>=25){
    	cout << "Yes" << endl;
    }
    else{
    	cout << "No" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   	solve();
    return 0;
}