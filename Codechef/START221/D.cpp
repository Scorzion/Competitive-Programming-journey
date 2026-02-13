/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

**/
 
#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    ll l, w, r, g, b;
    cin >> l >> w >> r >> g >> b;

    vector<ll> v={r,g,b};
    sort(v.begin(),v.end());

    if(v[2]==2*l+w || v[2]==2*w+l || v[2]==3*l || v[2]==3*w){
    	cout << 5 << endl;
    }
    else if(v[2]>2*l+w || v[2]>2*w+l || v[2]==3*l || v[2]==3*w){
    	cout << 6 << endl;
    }
    else if(v[2]==2*l || v[2]==2*w || v[2]==l+w){
    	if(v[0]==v[1]) cout << 4 << endl;
    	else cout << 5 << endl;
    }
    else{
    	if(v[0]==l || v[0]==w || v[1]==l || v[1]==w){
    		cout << 5 << endl;
    	}
    	else{
    		cout << 6 << endl;
    	}
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
