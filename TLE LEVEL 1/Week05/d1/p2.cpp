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
    int n, m;
    cin >> n >> m;

    ll a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    ll b[m];
    for(int i=0; i<m; i++){
    	cin >> b[i];
    }

    for(int i=0; i<m; i++){
    	bool flag = 0;
    	
    	for(int j=0; j<n; j++){
    		if(b[i]==a[j]){
    			a[j]=0;
    			flag = 1;
    			break;
    		}
    	}

    	if(flag==0){
    		cout << "No" << endl;
    		return;
    	}
    }

    cout << "Yes" << endl;
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
