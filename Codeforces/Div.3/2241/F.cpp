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

    string s;
    cin >> s;
        
    int one = -1;
    int zero = -1;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){ 
        	one = i; 
        	break;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(s[i]=='0'){ 
        	zero = i; 
        	break;
        }
    }
    
    if(one>zero || one==-1 || zero==-1){
        cout << "Bob" << endl;
        return;
    }
    
    ll num1 = 0;
    ll num0 = 0;
    ll inv = 0; 
    ll left= 0;
    for(int i=one; i<=zero; i++){
        if(s[i]=='1'){
            num1++;
            left++;
        }
        else{
            num0++;
            inv += left;
        }
    }
    
    if(num1%2==num1%2 && num1%2==0 && inv==num1*num0){
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
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