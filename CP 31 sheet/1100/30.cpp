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

    if(n==1 || n==2){
    	cout << "YES" << endl;
    	return;
    }

    int p = 0;
	int q = 0;
    bool flag = 1;
    for(int i=0; i<=n/2; i++){
    	if(a[i]!=a[n-i-1]){
    		flag = 0;
    		p = a[i];
    		q = a[n-i-1];
    		break;
    	}
    }


    if(flag){
    	cout << "YES" << endl;
    }
    else{
    	vector<int> u;
    	vector<int> v;

    	for(int i=0; i<n; i++){
    		if(a[i]!=p){
    			u.pb(a[i]);
    		}

    		if(a[i]!=q){
    			v.pb(a[i]);
    		}
    	}


    	bool f1 = 1, f2 = 1;
    	for(int i=0; i<u.size()/2; i++){
	    	if(u[i]!=u[u.size()-i-1]){
	    		f1 = 0;
	    		break;
	    	}    	
	    }


    	for(int i=0; i<v.size()/2; i++){
	    	if(v[i]!=v[v.size()-i-1]){
	    		f2 = 0;
	    		break;
	    	}
    	}

    	if(f1||f2){
    		cout << "YES" << endl;
    	}
    	else{
    		cout << "NO" << endl;
    	}
    }
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