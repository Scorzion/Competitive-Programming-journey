#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int l, r;
    cin >> l >> r;

    if(l==0){
    	if(r==0) cout << 0 << endl;
    	else cout << r-1 << endl;
    }
    else if(l>0){
    	cout << r-l << endl;
    }
    else if(r==0){
    	cout << abs(l)-1 << endl;
    }
    else if(r<0){
    	cout << abs(l)-abs(r) << endl;
    }
    else{
    	if(abs(l)==r || abs(l)-r==1 || r-abs(l)==1){
    		cout << 0 << endl;
    	}
    	else if(abs(l)>r){
    		cout << abs(l)-r-1 << endl;
    	}
    	else{
    		cout << r-abs(l)-1 << endl;
    	}
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