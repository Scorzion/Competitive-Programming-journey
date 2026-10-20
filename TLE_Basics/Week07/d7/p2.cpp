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

void solve(){
	int n;
	cin >> n;

	vector<pair<int,int>> v;
	for(int i=2; i<=n; i++){
		int x = 0;
		int sum = 0;
		int j = 1;
		x=i*j;
		while(x<=n){
			sum += x;
			j++;
			x = i*j;
		}
		v.pb({sum,i});
	}

	sort(v.begin(), v.end());


	// for(int i=0; i<v.size(); i++){
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }

	int last = v.size()-1;
	cout << v[last].second << endl;
	return;
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
