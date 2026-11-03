#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    string s;
    cin >> s;

    for(int i=1; i<s.size()-1; i++){
    	if(s[i-1]==s[i+1] && s[i]==s[i+1]){
    		s[i] = (char) ('a'+(s[i]+1-'a')%26);
    	}
    	else if(s[i]==s[i-1]){
    		if(s[i+1]-s[i]==1){
    			s[i] = (char) ('a'+(s[i+1]+1-'a')%26);
    		}
    		else if(s[i-1]-s[i+1]==1){
    			s[i] = (char) ('a'+(s[i-1]+1-'a')%26);
    		}
    		else{
    			s[i] = (char) ('a'+((s[i-1]+s[i+1])/2-'a')%26);
    		}
    	}
    	else{
    		continue;
    	}
    }

    if(s[s.size()-1]==s[s.size()-2]){
    	s[s.size()-1] = (char) ('a'+(s[s.size()-1]+1-'a')%26);
    }

    for(auto ch : s) cout << ch;

    cout << endl;
}	

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}