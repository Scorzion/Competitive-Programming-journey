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

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int cnt=0;
	for(int i=0; i<a.size()-1; i++){

		if(__gcd(a[i], a[i+1])!=1){

			// for(int j=a[i]+1; j<a[i+1]; j++){

				// if(__gcd(a[i],j)==1 && __gcd(a[i+1],j)==1){
					cnt++;
					a.insert(a.begin() + i+ 1, 1);
				// }
			// }
		}
	}

	cout << cnt << endl;
	for(auto it: a){
		cout << it << " ";
	}
	cout << endl;
	return;

}


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
