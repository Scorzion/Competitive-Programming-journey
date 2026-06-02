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
    int n, q;
    cin >> n >> q;

    vector<vector<ll>> a(2, vector<ll> (n));
    for(int i=0; i<n; i++){
    	cin >> a[0][i];
    	a[1][i] = 0;	

    	if(a[0][i]%2==0){
    		a[1][i] = 1;
    		
    	}
    }

    


    while(q--){
    	int exp;
    	cin >> exp;

    	for(int i=0; i<n; i++){
    		if(a[1][i]==1 && ((a[0][i]%(1LL<<exp))==0)){


    			a[0][i] += ((1LL<<exp) - 1);

         
    			if(a[0][i]%2==1) a[1][i]=0;


    		}
    	}
    }

    for(int i=0; i<n; i++){
    	cout << a[0][i] << " ";
    }
    cout << endl;

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();


    solve();
    
    return 0;
}