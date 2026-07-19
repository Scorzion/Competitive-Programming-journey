#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int k;
    cin >> k;

    vector<int> a(k);

    ll freq2 = 0;
    ll freq3 = 0;
    for(auto &it:a){
    	cin >>it;
    	if(it>=2) freq2++;
    	if(it>=3) freq3++;
    }

    if(freq2>1 || freq3>0){
    	cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
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