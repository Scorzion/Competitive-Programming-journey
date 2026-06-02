/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
#include <unordered_set>
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
    string s;
    cin >> s;

    string k = "";
    map<char,int> mp;


    bool flag = 1;
    for(int i=0; i<s.length(); i++){
    	if(mp.find(s[i])==mp.end() && flag ==1){
    		mp[s[i]] = 1;
    		k += s[i];
    	}
    	else{
    		flag = 0;
    		if(s[i]!=s[i%(k.length())]){
    			cout << "NO" << endl;
    			return;
    		}
    	}
    }

    cout << "YES" << endl;
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