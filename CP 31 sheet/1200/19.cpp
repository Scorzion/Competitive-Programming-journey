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

    char c;
    cin >> c;

    string s;
    cin >> s;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]!=c){
        	cnt++;
        }
    }

    if(cnt==0){
        cout << 0 << endl;
        return;
    }

    for(int x=n; x>n/2; x--){
        if(s[x-1]==c){
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n << " " << n-1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}