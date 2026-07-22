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

    vector<ll> a(n);

    bool chk = 1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(i!=0)
            if(a[i]<a[i-1])
                chk = 0;
    }

    if(a[n-2]<=a[n-1] && a[n-1]>=0){
    	cout << n-2 << endl;
    	for(int i=0; i<n-2; i++){
    		cout << i+1 << " " << n-1 << " " << n << endl;
    	}
    }
    else if(chk){
        cout << 0 << endl;
    }
    else{
    	cout << -1 << endl;
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