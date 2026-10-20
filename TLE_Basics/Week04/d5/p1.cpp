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

	if(n==1){
		if(a[0]==0){
			cout << 1 << endl;
			return;
		}
		else{
			cout << 0 << endl;
			return;
		}
	}

	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i]==0){
			cnt++;
		}
	}

	if(cnt==n){
		cout << 2 << endl;
		return;
	}

	int maxi = INT_MIN;
	for(int i=0; i<n; i++){
		maxi = max(maxi, a[i]);
	}


	int b[maxi+1];
	for(int i=0; i<=maxi; i++){
		b[i] = 0;
	}
	
	for(int i=0; i<=maxi; i++){
		for(int j=0; j<n; j++){
			if(i==a[j]){
				b[i]++;
			}
		}
	}

	
	bool flag = 0;
	int sum = 0;

	for(int i=0; i<=maxi; i++){
		if(b[i]==0 && flag ==0){
			cout << 2*i << endl;
			return;
		}

		if(b[i]==1  && flag==0){
			sum += i;
			flag =1;
		}

		if(b[i]==0 && flag==1){
			sum+= i;
			cout << sum << endl;
			return;
		}
	}

	if(flag==1){
	sum += maxi+1;
	cout << sum << endl;
	return;
	}
	else{
		sum += 2*(maxi+1);
		cout << sum << endl;
		return;
	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
