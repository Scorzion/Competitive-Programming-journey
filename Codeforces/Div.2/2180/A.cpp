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
    int l, a, b;
    cin >> l >> a >> b;

    vector<int> s(l,0);
    int i=1;
    s[a] = 1;
    while((a+i*b)%l!=a){
    	s[(a+i*b)%l] = 1;
    	i++;
    }

    for(int i = l-1; i>=0; i--){
    	if(s[i]==1){
    		cout << i << endl;
    		return;
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
