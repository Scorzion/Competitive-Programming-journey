/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int mx = 0;
    for(int i=0; i<n; i++){
    	if(s[i]=='1'){
    		mx++;
    	}
    	else if(i!=0 && i!=n-1 && s[i]=='0' && s[i-1]==s[i+1] && s[i-1]=='1'){
    		mx++;
    		s[i]='1';
    	}
    	
    }

    int mn = mx;
    for(int i=1; i<n-1; i++){
    	if(s[i]=='1' && s[i-1]=='1'&& s[i+1]=='1'){
    		mn--;
    		s[i]='0';
    	}
    }

    cout << mn << " " << mx << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}