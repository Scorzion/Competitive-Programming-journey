/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

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

   	if(n==2 && abs(a[1]-a[0])>1){
   		cout << -1 << endl;
   		return;
   	}

   	for(int i=0; i<n-1; i++){
   		if(abs(a[i+1]-a[i])<=1){
   			cout << 0 << endl;
   			return;
   		}
   	}

	for(int i=0; i<a.size()-1; i++){
	   for(int j=0; j<a.size(); j++){
	   		if(j==i || j==i+1){
	   			continue;
	   		}
	   		else{
	   			if(a[j]>=a[i]-1 && a[j]<=a[i+1]+1){
	   				cout << 1 << endl;
	   				return;
	   			}

	   			if(a[j]>=a[i+1]-1 && a[j]<=a[i]+1){
	   				cout << 1 << endl;
	   				return;
	   			}
	   		}
	   	}
	}

	cout << -1 << endl;
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
