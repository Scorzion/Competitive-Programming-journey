#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
     int n;
     cin >> n;


     vector<int> a(n);
     int plus = 0;
     int minus = 0;
     for(auto &it:a){
     	cin >> it;
     	if(it==1) plus++;
     	else minus++;
     }
     	

     if(n & 1){
    	cout << "NO" << endl;
     }
     else{
     	 if((n/2) & 1){
     	 	if((plus&1) && (minus&1)){
     	 		cout << "YES" << endl;
     	 	}
     	 	else{
     	 		cout << "NO" << endl;
     	 	}
     	 }
     	 else{
     	 	if(( (!(plus&1)) && (!(minus&1)) )){
     	 		cout << "YES" << endl;
     	 	}
     	 	else{
     	 		cout << "NO" << endl;
     	 	}
     	 }
     }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}