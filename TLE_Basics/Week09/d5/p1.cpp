/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

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
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i=0; i<n; i++)
    	cin >> a[i];
    

    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    long long asum = 0;
    long long bsum = 0;

    for(int i=0; i<n; i++){
    	if(i%2==0){
    		if(a[i]%2==0)
    			asum += a[i];
    	}
    	else{
    		if(a[i]%2==1)
    			bsum += a[i];
    	}
    }

    if(asum>bsum){
    	cout << "Alice" << endl;
    }
    else{
    	if(asum == bsum){
    		cout << "Tie" << endl;
    	}
    	else{
    		cout << "Bob" << endl;
    	}
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
