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

    int cnt = 0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];

    	if(i!=0 && a[i]==a[0])
    		cnt++;
    }

    if(cnt==n-1){
    	cout << "YES" << endl;
    	return;
    }

    if(n==2){
    	cout << "YES" << endl;
    	return;
    }

    vector<int> b(n);
    b = a;
    sort(b.begin(),b.end());

    for(int i=0; i<n; i++){
    	if(b[i]!= b[0] && b[i]!= b[n-1]){
    		cout << "NO" << endl;
    		return;
    	}
    }
  
    int cnt1 = 0;
    cnt++;
    for(int i=0; i<n; i++){
    	if(a[i]!=a[0]){
    		cnt1++;
    	}
    }

    if(abs(cnt1-cnt)<=1){
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

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
