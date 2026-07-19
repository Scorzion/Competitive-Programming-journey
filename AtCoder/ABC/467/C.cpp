#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    ll px, py, qx, qy, rx, ry, sx, sy;
    cin >> px >> py >> qx >> qy >> rx >> ry >> sx >> sy;

    ll d1x = qx-px;
    ll d1y = qy-py;
    ll d2x = sx-rx; 
    ll d2y = sy-ry;

    ll chk = d1x*d2y-d1y*d2x;

    if(chk != 0){
        cout << "Yes" << endl;
        return;
    }

    ll point = ((rx+sx)-(px+qx))*d1x + ((ry+sy)-(py+qy))*d1y;

    if(point==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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