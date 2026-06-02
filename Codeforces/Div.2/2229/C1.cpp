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

    vector<pair<int,int>> a(n);
    for(auto &it:a){
    	cin >> it.first;
    	if(it.first>0){
    		it.second = 1;		
    	}
    	else{
    		it.second = 0;
    	}
    } 

    vector<int> ans;
    int k = 0;
	for(int i=n-1; i>=0; i--){
		if((a[i].second+k)%2==1){
			k++;
			ans.pb(i+1);
		}
	}

	if(!k){
		cout << 0 << endl;
		cout << endl;
	}
	else{
		cout << k << endl;
		for(auto it:ans){
			cout << it << " ";
		}
		cout << endl;
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