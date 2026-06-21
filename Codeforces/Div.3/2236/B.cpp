#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> b(n,0);
    for(int i=0; i<n; i++){
        if(s[i]=='1') b[i] = 1;
    }

    if(n<2*k){
        for(int i=2*(n-k); i<n; i++){
            if(b[i]==1){
                cout << "NO" << endl;
                return;
            }
        }
    }

    for(int i=0; i<n-k; i++){
        if(b[i]^b[i+k]){
            if(b[i]&1==1) b[i+k]==1;
        }
        else{
            b[i]=0;
            b[i+k]=0;
        }
    }

    for(int i=0; i<2*n-k; i++){
        if(b[i]==1){
            cout << "NO" << endl;
            return;
        }
        
    }

    cout << "YES" << endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}