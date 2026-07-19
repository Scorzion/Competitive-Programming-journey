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
    
    int big = 0;
    int small = 0;
    
    for(ll i=2; i*i<=n; i++) {
        if(n%i == 0) {
            small++;
            while(n%i == 0) {
                big++;
                n /= i;
            }
        }
    }

    if(n>1){
        small++;
        big++;
    }
    
    cout << big + small - 1 << endl;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}