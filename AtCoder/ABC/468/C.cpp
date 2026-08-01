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

    vector<int> p(n), q(n);
    for (auto &it : p) cin >> it;
    for (auto &it : q) cin >> it;

    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 1);

    ll cnt = 0;
    bool nxt = 1;

    while(nxt){
        if(perm>p && perm<q) {
            cnt++;
        }
        nxt = next_permutation(perm.begin(), perm.end());
    }

    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}