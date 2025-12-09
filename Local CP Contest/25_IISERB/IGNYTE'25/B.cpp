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
    int n;
    cin >> n;

    vector<char> v(n);
    string s;
    cin >> s;

    for(int i=0; i<n; i++){
    	v[i] = s[i];
    }

    int ans = 0;
    int k =1;
    while(k<v.size()-1){
    	if(v[k]==v[k-1] || v[k]==v[k+1]){
    		v.erase(v.begin()+k);
    		ans++;
    	}
    	else{
    		k++;
    	}
    }

    if(v.size()>1){
    	int s = v.size();
    	if(v[s-1]==v[s-2]){
    		ans++;
    	}
    }

    cout << ans << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


	solve();
    
    return 0;
}
