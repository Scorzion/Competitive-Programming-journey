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
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    bool flag = 0;
    for(int i=1; i<n; i++){
    	if(a[i]!=a[0]){
    		flag = 1;
    		break;
    	}
    }

    if(flag ==0){
    	cout << "NO" << endl;
    }
    else{
    	sort(a.rbegin(),a.rend());

    	if(a[0]==a[1]){
    		swap(a[0],a[n-1]);
    	}
    	cout << "YES" << endl;
    	for(auto it:a){
    		cout << it << " ";
    	}
    	cout << endl;

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
