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

    ll sum = 0;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(auto &it:a){
    	cin >> it;
    	sum += it;
    	mp[it]++;
    }

    ll curr = sum;
    vector<ll> ans;
    for(int i=0; i<n; i++){
    	curr -= a[i];
    	mp[a[i]]--;
    	
    	if(curr%2==0 && mp.find(curr/2)!=mp.end()){
    		
    		if(mp[curr/2]>0) ans.pb(i+1);
    	}

    	curr = sum;
    	mp[a[i]]++;
    }

            if(mp[curr/2]>0) ans.pb(i+1);
        }

        curr = sum;
        mp[a[i]]++;
    }

    cout << sz(ans) << endl;
    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
    cout << sz(ans) << endl;
    for(auto it:ans){
    	cout << it << " ";
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}