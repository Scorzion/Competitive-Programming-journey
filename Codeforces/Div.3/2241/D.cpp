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

    vector<ll> a(n), b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;

    vector<ll> diff(n);
    for(int i=0; i<n; i++){
        diff[i] = b[i]-a[i];
        diff[i] = (i%2==0)? diff[i]: -diff[i];
    }

    ll even = 0;
    ll odd = 0;
    bool chk = 1;
    for(int i=0; i<n && chk; i++){
        if(i%2==0){
            if(odd < -diff[i]){ 
            	chk = 0; 
            	break; 
        	}
            even = diff[i] + odd;   
        }
        else{
            if(even < diff[i]){ 
            	chk = 0; 
            	break;
            }
            odd = even - diff[i];  
        }
    }
    cout << (chk? "YES" : "NO") << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}