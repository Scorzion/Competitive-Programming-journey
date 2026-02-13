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
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    for(int i=0; i<n; i++){
    	if(a[i]%k==0){
    		cout << 0 << endl;
    		return;
    	}
    }

    if(k==2){
    	cout << 1 << endl;
    	return;
    }

    if(k==3){
    	for(int i=0; i<n; i++){
    		if(a[i]%3==2){
    			cout << 1 << endl;
    			return;
    		}
    	}

    	cout << 2 << endl;
    	return;
    }

    if(k==4){
    	int cnt = 0;
    	for(int i=0; i<n; i++){
    		if(a[i]%2==0){
    			cnt++; 
    		}
    	}

    	if(cnt>=2){
    		cout << 0 << endl;
    		return;
    	}

    	if(cnt==1){
    		if(n>1){
    			cout << 1 << endl;
    		}
    		else{
    			cout << 2 << endl;
    		}
    	}

    	if(cnt==0){
    		if(n>1){
    			for(int i=0; i<n; i++){
    				if(a[i]%4==3){
    					cout << 1 << endl;
    					return;
    				}
    			}

    			cout << 2 << endl;
    			return;
    		}
    		else{
    			int y = a[0]%4;
    			cout << 4 - y << endl;
    			return;
    		}
    	}
    }


    if(k==5){
    	int mini = INT_MAX;
    	for(int i=0; i<n; i++){
    		int x = 5 - (a[i]%5);
    		mini = min (x, mini);
    	}

    	cout << mini << endl;
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
