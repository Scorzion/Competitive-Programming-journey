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
	int n, k;
	cin >> n >> k;

	vector<bool> v(n+1);
	for(int i=0; i<=n; i++){
		v[i] = 1;
	}

	v[0] = 0;
	v[1] = 0;

	for(int i=0; i*i<=n; i++){
		if(v[i]==1){
			for(int j=2*i; j<=n; j+=i){
				v[j] = 0;
			}
		}
	}

	vector<int> prime;
	for(int i=0; i<=n; i++){
		if(v[i]==1){
			prime.pb(i);
		}
	}

	int cnt = 0;

	for(int i=prime.size()-1; i>=0; i--){

		for(int j=0; j<prime.size()-1; j++){
			int num = prime[j]+prime[j+1]+1;

			if(num==prime[i]){
				cnt++;
				break;
			}
		}
	}

	if(cnt>=k){
		cout << "YES" << endl;
		return;
	}
	else{
		cout << "NO" << endl;
		return;
	}
	
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    return 0;
}
