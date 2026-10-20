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

	vector<ll> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int j = 0;
	for(int i=0; i<n-1; i++){
		j = i+1;

		while(a[i]>0 && j<n){
				
			if(a[j]<0){
				if(a[i]+a[j]>=0){
					a[i] = a[i] + a[j];
					a[j] = 0;
				}
				else{
					a[j] = a[i] + a[j];
					a[i] = 0;
					}
			}
			j++;
		}
	}

	ll sum = 0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			sum += a[i];
		}
	}
   
	cout << sum << endl;

}

//tc - O(n2)
//It will give tle, better soln in p4a.cpp

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


