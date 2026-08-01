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

    vector<int> c(n);
    set<int> st;
    for(int i=0; i<n; i++){
        cin >> c[i];
        st.insert(c[i]);
    }

    vector<pair<int,int>> v;
    map<int,int> mp;
    
    int idx = 0;
    int cnt = 0;
    for(auto it:st){
        // cout << it << endl;
        cnt = 0;
        idx = 0;
        for(int i=0; i<n; i++){
            if(it==c[i]){

                if(i==0){
                    mp[0]++;
                    idx = i;
                    continue;
                }

                mp[i-idx-1]++;
                mp[(i-idx-1)/2]++;
                idx = i;
                cnt++;
            }
        }

        idx++;
        mp[n-idx]++;

        if(idx!=n){
            mp[(n-idx+1)/2]++;
        }
        

        // for(auto x:mp){
        //     cout << x.first << " " << x.second << endl;
        // }
        // cout << endl;

        int tmp = 0;
        bool yes = 0;
        for(auto m:mp){
            if(mp.find(m.first/2)!=mp.end() && m.first!=0){
                if(m.second == 1){
                    yes = 1;    
                    tmp = max(tmp,m.first/2);
                }
                else{
                    tmp = max(tmp,m.first);
                }
            }
        }

        if(yes && mp[tmp]==1) cnt++;

        v.pb({tmp,cnt});
        mp.clear();
    }



    sort(v.begin(), v.end(), [](auto &a, auto &b){
        if(a.first != b.first) return a.first<b.first;
        return a.second>b.second;
    });

    // for(auto it:v){
    //     cout << it.first << " " << it.second << endl;
    // }

    cout << v[0].first << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}