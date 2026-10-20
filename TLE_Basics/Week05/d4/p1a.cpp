/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

bool comp(int a, int b){
		return a>b;
}

void solve(){
	int n;
	cin >> n;

	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		v.pb({a, i});
	}

	vector<int> ans(n);
	sort(v.begin(), v.end());
	ll curr = 1;
	ll temp = 0;

	for(int i=n-1; i>=0; i--){
		ans[v[i].second]=curr;
		temp += (2*(abs(curr)*v[i].first));

		if(curr>0){
			curr *= -1;
		}
		else{
			curr *= -1;
			curr++;
		}
	}

	cout << temp << endl;
	cout << 0 << " ";

	for(auto it: ans){
		cout << it << " ";
	}

	cout << endl;

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
