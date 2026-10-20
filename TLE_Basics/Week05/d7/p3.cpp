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
	int n, x;
	cin >> n >> x;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}


	vector<int> v;
	int y = a[n-1];

	int i=0;
	int j=0;
	int cnt=0;

	while(i<=y && j<=n){
		if(i!=a[j]){
			cnt++;
		}
		else{
			v.pb(cnt);
			cnt = 1;
			j++;
		}
		i++;
	}

	int last = 2*(x-a[n-1]);
	v.pb(last);

	int maxi = INT_MIN;
	for(int i=0; i<v.size(); i++){
		maxi = max(maxi, v[i]);
	}

	cout << maxi << endl;
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
