#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int m, d;
    cin >> m >> d;

    string s;
    cin >> s;

    int cntug = 0;
    int g = -1;

    int ans = 0;
    for(int i=0; i<m; i++){
    	if(s[i]=='.'){

    		if(g>=0){
    			if(i-g>d){
    				cntug++;
    			}
    		}
    		else{
    			cntug++;
    		}
    	}
    	else{
    		ans += max(cntug-d,0);
    		cntug = 0;
    		g = i;
    	}
    }

    ans += cntug;

    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();
    return 0;
}