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
    ll a, b, xa, ya, xb, yb, n, m;

    cin >> a >> b >> xa >> ya >> xb >> yb >> n >> m;

    ll result = 0;

    ll x = 0;
    ll y = 0;
    while(n>=2){
    	x = ( ((a%m)*(xb%m))%m + ((xa%m)*(yb%m))%m )%m;

    	y = ( ((b%m)*(yb%m))%m + ((ya%m)*(xb%m))%m )%m;
 

    	result += x%m;
    	xa = xb;
    	ya = yb;

    	xb = x;
    	yb = y;
    	n--;
    }

    cout << result << endl;


}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
