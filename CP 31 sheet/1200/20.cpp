#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

ll check(int l, int r, string &s, char ch){
    ll ans = 1;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]==ch){
            ans++;
            l++;
        }
        else if(s[r]==ch){
            ans++;
            r--;
        }
        else{
            return -1;
        }
    }

    return ans;
}

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l=0;
    int r=n-1;
    while(l<r){
    	if(s[l]==s[r]){
    		l++;
    		r--;
    	}
    	else{
            ll ans1 = check(l+1,r,s,s[l]);
            ll ans2 = check(l,r-1,s,s[r]);

            if(ans1 ==-1 && ans2==-1){
                cout << -1 << endl;
            }
            else if(ans1>=0 && ans2>=0){
                cout << min(ans1, ans2) << endl;
            }
            else{
                cout << max(ans1, ans2) << endl;
            }
            return;
    	}
    }

    cout << 0 << endl;
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}