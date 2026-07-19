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

    unordered_set<string> st;

    for(int i=0; i<n; i++){
        st.insert(string(1,s[i]));

        if(i<n-1)
            st.insert(string{s[i],s[i+1]});

        if(i<n-2)
            st.insert(string{s[i],s[i+1],s[i+2]});
    }

    for(char c='a'; c<='z'; c++){
        string t(1,c);
        if(!st.count(t)){
            cout << t << endl;
            return;
        }
    }

    for(char c='a'; c<='z'; c++){
        for(char d='a'; d<='z'; d++){
            string t;
            t += c;
            t += d;

            if(!st.count(t)){
                cout << t << endl;
                return;
            }
        }
    }

    for(char c='a'; c<='z'; c++){
        for(char d='a'; d<='z'; d++){
            for(char e='a'; e<='z'; e++){
                string t;
                t += c;
                t += d;
                t += e;

                if(!st.count(t)){
                    cout << t << endl;
                    return;
                }
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