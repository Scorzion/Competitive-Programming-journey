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

    n--;

    vector<int> div;
    for (int i = 1; i*i<=n; i++) {
        if (n % i == 0) {
            if (n / i == i) {
                div.pb(i) ;
            }
            else {
                div.pb(i) ;
                div.pb(n/i) ;
            }
        }
    }

    sort(div.begin(),div.end());
    for(int i=1; i<div.size(); i++){

    	if(i!=div.size()-1){
    		int k = n;
	    	while(true){
	    		if(k%div[i]==0){
	    			k/=div[i];
	    			k--;
	    		}
	    		else{
	    			break;
	    		}

	    		if(k==0){
	    			cout << "YES" << endl;
	    			return;
	    		}
	    	}
    	}
    	
    }

    cout << "NO" << endl;
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