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

int checker(int last_dig, int first_dig, vector<int> num){
	int a = 21;
	bool flag = 0;
    int last = 0;
    int first = 0;

    for(int i=0; i<num.size(); i++){
    	if(num[i]==last_dig && flag==1){
    		first = num.size()-i;
    		a = (num.size()-last) + (last-first-1);
    		break;
    	}

    	if(num[i]==first_dig && flag==0){
    		last = num.size()-i;
    		flag = 1;
    	}
    }
    return a;
}

void solve(){
    ll n;
    cin >> n;

    vector<int> num;
    int x = 0;
    while(n>0){
    	x = n%10;
    	num.pb(x);
    	n /= 10;
    }

   	int ans = checker(0,0,num);
   	ans = min(ans, checker(2,5,num));
   	ans = min(ans, checker(5,0,num));
   	ans = min(ans, checker(7,5,num));

	cout << ans << endl;
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
