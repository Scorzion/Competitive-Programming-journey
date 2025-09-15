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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<char> a(n);
    for(int i=0; i<n; i++){
    	a[i] = s[i];
    }

    bool flag = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){

        if(a[i]=='1'){
            cnt++;
        }
        else{
            cnt = 0;
        }
    	

    	if(cnt==k){
    			cout << "NO" << endl;
    			return;
    		}
    	}
    

    cout << "YES" << endl;
    vector<int> b(n);

    int x = n;
    for(int i=n-1; i>=0; i--){
    	if(a[i]=='0'){
    		b[i] = x;
    		x--;
    	}
    }

    x = 1;
    for(int i=0; i<n; i++){
    	if(a[i] =='1'){
    		b[i] = x;
    		x++;
    	}
    }

    for(auto it:b){
    	cout << it << " ";
    }
    cout << endl;


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
