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

    string s;
    cin >> s;

    int ops = 0;
    for(char x ='z'; x>='b'; x--){
        bool need = 0;
        for(int i=0; i<n/2; i++){
            char a =s[i];
            char b =s[n-1-i];
            if(a!=b && max(a,b)==x){ 
            	need = 1; 
            	break; 
            }
        }

        if(need){
            ops++;
            for(char &c : s) if(c==x) c =x-1;
        }
    }

    cout << ops << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}