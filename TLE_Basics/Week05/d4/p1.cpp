/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cmath>
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

	int b[n];
	for(int i=0; i<n; i++){
		b[i] = a[i];
	}

	sort(b, b+n);

	int c[n];
	int d[n];
	for(int i=0; i<n; i++){
		c[i]=0;
		d[i]=0;
	}

	int k=-1;
	int m=1;

	int f=n-1;
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<n; j++){
			if(b[i]==a[j] && d[j]!=1){
				d[j]=1;

				if(i==f){
					c[j]=k;
					k--;
					f-=2;
					break;
				}
				else{
					c[j]= m;
					m++;
					break;
				}
			}
		}
	}

	int sum = 0;
	for(int i=0; i<n; i++){
		sum += a[i]*abs(c[i])*2;
	}

	cout << sum << endl;
	
	cout << 0 << " ";

	for(int i=0; i<n; i++)
		cout << c[i] << " ";


	cout << endl;
	return;
}

//tc - O(n2) so not good soln try to optimize it.

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
