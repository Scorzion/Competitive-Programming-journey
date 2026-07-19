#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int x;
    cin >> x;

    int sbits = __builtin_popcount(x);
    int start = 32-__builtin_clz(x);

    if(sbits>1){
    	if(sbits==start){
    		cout << -1 << endl;
    	}
    	else{
            int y = x&-x;
            for(int i=0; i<start-1; i++){
                if((x&(1<<i))==0){
                    y |= (1<<i);
                    break;
                }
            }

            cout << y << endl;
    	}
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