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

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int sum = 0;
	int ans = 0;
	int flag = 0;
	while(true){

		sum = 0;
		flag = 0;
		
		for(int i=0; i<n; i++){
			sum += a[i];
		}

		if(sum%2==0){
			cout << ans << endl;
			return;
		}
		else{
			for(int i=0; i<n; i++){
				if(a[i]%4==1 && a[i]>4){
					a[i] /= 2;
					flag = 1;
					break;
				}
			}

			if(flag == 0){
				sort(a, a+n);
				for(int i=0; i<n; i++){
					if(a[i]%2==1){
						a[i] /= 2;
						break;
					}
				}
			}
		}
		ans++;
	}


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
