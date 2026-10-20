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
    ll n;
    cin >> n;

    ll len = 2*n;
   	ll a[len];
   	for(ll i=0; i<len; i++){
   		cin >> a[i];
   	}


   	sort(a, a+(2*n));
    int s1 = 0;
    int s2 = 0;

    for(int i=0; i<n; i++){
        s1 += a[i];
    }

    for(int j=n; j<2*n; j++){
        s2 += a[j];
    }

    if(s1!=s2){
        for(int i=0; i<2*n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
