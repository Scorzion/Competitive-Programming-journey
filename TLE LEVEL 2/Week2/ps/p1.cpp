#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
	cin >> n;
	   
	if(n==0){
	    cout << 1 << " " << 3 << " " << 4   << " " << 5 << endl;
	    return;
	}
	cout << 1 << " " << 2 << " " << (1LL<<32) << " " << (1LL<<32)+n << endl;
}

int main() {
	int t;
	cin >> t;
    
    while(t--){
        solve();
    }	

}
