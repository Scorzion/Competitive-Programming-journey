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

    vector<int> a(n);
    for(auto &it:a) cin >> it;

   	vector<int> prev_diff(n,-1);

   	int prv = -1;
   	for(int i=1; i<n; i++){
   		if(a[i]!=a[i-1]) prv = i-1;
   		prev_diff[i] = prv;
   	}

   	int q;
   	cin >> q;

   	while(q--){
   		int l, r;
   		cin >> l >> r;

   		if(prev_diff[r-1]>=l-1){
   			cout << r << " " << prev_diff[r-1]+1 << endl;
   		}
   		else{
   			cout << -1 << " " << -1 << endl;
   		}
   	}
   	cout << endl;
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