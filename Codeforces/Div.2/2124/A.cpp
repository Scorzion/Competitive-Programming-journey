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

    vector<int> b(n,0);
    vector<int> c(n,0);
    b = a;
    c = a;

    int cnt = 0;
    while(b.size()>=2 && cnt!=b.size()){
    	sort(c.begin(), c.end());

    	cnt = 0;

	    for(int i=0; i<b.size(); i++){
	    	if(b[i]==c[i]){
	    		b.erase(b.begin()+i);
	    		c.erase(c.begin()+i);
	    		break;
	    	}
	    	else{
	    		cnt++;
	    	}
	    }
	}

	if(cnt==b.size()){
		cout << "YES" << endl;
		cout << b.size() << endl;
		for(auto it:b){
			cout << it << " ";
		}
		cout << endl;
	}
	else{
		cout << "NO" << endl;
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
