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

   	map<int,int> mp;
   	for(int i=0; i<n; i++){
	   	
	   	while(a[i]%2==0){
	        mp[2]++;
	        a[i] = a[i]/2;
	    }

	    for(int j=3; j*j<=a[i]; j=j+2){
	        while(a[i] % j == 0){
	            mp[j]++;
	            a[i] = a[i]/j;
	        }
	    }

	    if(a[i]>2) mp[a[i]]++;
   	}

   	for(auto it:mp){
   		if(it.second%n!=0){
   			cout << "NO" << endl;
   			return;
   		}
   	}

   	cout << "YES" << endl;


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