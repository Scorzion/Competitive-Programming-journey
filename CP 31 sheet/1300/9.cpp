/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    int k = n;

    map<int,int> mp;
    vector<int> v;
    while(k--){
    	int x; 
    	cin >> x;

    	int c = x;
    	int i = 0;
    	while(c--){
    		int g;
    		cin >> g;
    		v.pb(g);

    		mp[g]++;
    	}

    	v.pb(0);
    }

    int chk = 0;

    int chk_sum = 0;
    for(int i=0; i<v.size(); i++){
    	if(v[i]==0){
    		if(chk) chk_sum++;
    		chk = 0;
    	}
    	if(mp[v[i]]==1){
    		chk = 1;
    	}
    }

    if(chk_sum==n){
    	cout << "NO" << endl;
    }
    else{
    	cout << "YES" << endl;
    }

    


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}