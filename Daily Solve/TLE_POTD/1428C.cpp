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

    stack<char> st;

    for(int i=s.size()-1; i>=0; i--){
    	if(s[i]=='B'){
    		st.push(s[i]);
    	}
    	else{
    		if(!st.empty() && st.top()=='B') st.pop();
    		else st.push(s[i]);
    	}
    }

    while(!st.empty()){
    	if(st.top()=='B' && st.size()>1){
    		st.pop();
    		if(st.top()=='B'){
    			st.pop();
    		}
    		else{
    			st.push('B');
    			break;
    		}
    	}
        else{
            break;
        }
    }

    cout << st.size() << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}