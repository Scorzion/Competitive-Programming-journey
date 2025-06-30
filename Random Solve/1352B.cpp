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

    bool flagn = 0; 
    bool flagk = 0; 
    
    if(n%2==1){
    	flagn = 1;
    	if(k%2==1){
    		flagk = 1;
    	}
    	else{
    		cout << "NO" << endl;
    		return;
    	}
    }
    else{
    	if(k%2==1){
    		flagk =1;
    	}
    }

    if(flagn==1){
    	if(n<k){
    		cout << "NO" << endl;
    		return;
    	}
    }
    else{
    	if(flagk==1){
    		if(n<(2*k)){
    		cout << "NO" << endl;
    		return;
    		}
    	}
    	else{
    		if(n<k){
    			cout << "NO" << endl;
    			return;
    		}
    	}
    }

    cout << "YES" << endl;

    if(n==k){
    	if(flagn==0){
    	while(k>0){
    		cout << 1 << " ";
    		k--;
    	}
    	}
    	else{
    		while(k>0){
    		cout << 2 << " ";
    		k--;
    	}
    	}
    	cout << endl;
    	return;
    }

    if(flagn==0){
    	if(flagk==1){
    		int x = 0;
    		int i = 1;
    		while(x<=n && k>1){
    			cout << 2*i << " ";
    			x += 2*i;
    			i++;
    			k--;
    		}
    		cout << n-x << endl;
    		return;
    	}
    	else{
    		int x = 0;
    		int i = 1;
    		while(x<=n && k>1){
    			cout << (2*i)-1 << " ";
    			x += (2*i)-1;
    			i++;
    			k--;
    		}
    		cout << n - x  << endl;
    		return;
    	}
    }
    else{
    	int x = 0;
    	int i = 1;
    	while(x<=n && k>1){
    		cout << (2*i)-1 << " ";
    		x += (2*i)-1;
    		i++;
    		k--;
    	}
    	cout << n - x << endl;
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
