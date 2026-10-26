#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    string s, t;
    cin >> s >> t;

    int j=0;
    bool chk = 0;
    for(int i=0; i<s.size(); i++){
    	if(s[i]=='?' || s[i]==t[j]){
    		if(s[i]=='?') s[i]=t[j];
    		j++;
    	}

    	if(j==t.size()){
    		j = i;
    		chk = 1;
    		break;
    	}
    }


    if(chk){
    	cout << "YES" << endl;
    	for(int i=0; i<s.size(); i++){
    		if(s[i]=='?' && i>j) s[i]='a';
    		cout << s[i];
    	}
    	cout << endl;
    }
    else{
    	cout << "NO" << endl;
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