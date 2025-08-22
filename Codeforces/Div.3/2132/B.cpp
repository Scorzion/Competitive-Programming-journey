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
    ll n;
    cin >> n;

    if(n%11!=0){
    	cout << 0 << endl;
    	return;
    }

    ll x = n;
    vector<int> a;
    while(x!=0){
    	int digit = x%10;
    	a.pb(digit);
    	x /= 10;
    }

    int num = a.size();
    if(a.size()%2==1){
    	cout << 0 << endl;
    	return;
    }

    int flag = 0;
    for(int i=1; i<num; i++){
    	if(a[i]!=a[0]){
    		flag = 1;
    	}
    }

    vector<ll> ans;
    if(flag==0){
        int x = 0;
        for(int i=num/2-1; i>=0; i++){
            x += pow(10,i)*a[i];
        }
        ans.pb(x);

        x = 0;
        if(n%2==1 && n!=2){
        int flag = 0;
        for(int i=num/2-1; i>=0; i++){
            if(flag == 0){
            x += pow(10,i)*a[i];
            flag = 1;
            }
            else{
                flag = 0;
            }
        }
        ans.pb(x);
        }

        x = 0;
        if(n%2==0)
        for(int i=n-2; i>=0; i++){
            if(flag == 0){
            x += pow(10,i)*a[i];
            flag = 1;
            }
            else{
                flag = 0;
            }
        }
        
    }
    else{
    	cout << 1 << endl;
        cout << n/11 << endl;
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
