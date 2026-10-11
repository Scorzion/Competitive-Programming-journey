#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if(n==2){
    	cout << min(a,b) << endl;
    	return;
    }

    int x = 0;
    int tmp = 0;
    for(int i=0; i<n-1; i++){
    	 tmp = min(a/(i+1),b/(n-i-1));
    	 x = max(tmp,x);
    }

    cout << x << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}