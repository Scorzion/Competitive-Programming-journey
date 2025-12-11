/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    int n, k;
    cin >> n >> k;

    // check n - k is odd or not
    int check = n - k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for(int i=0; i<n; i++){
    	freq[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
    	if(freq[i]%2 != 0 && k > 0){
    		freq[i]--;
    		k--;
    	}
    }

    // for(auto it : freq){
    // 	cout << it << " ";
    // }

    if(k==0){
    	if(check%2==0){
    		for(int i=0; i<26; i++){
    			if(freq[i]%2!=0){
    				cout << "NO" << endl;
    				return;
    			}
    		}

    		cout << "YES" << endl;
    		return;
    	}
    	else{
    		int cnt = 0;
    		for(int i=0; i<26; i++){
    			if(freq[i]%2!=0){
    				cnt++;
    			}
    		}

    		if(cnt>1){
    			cout << "NO" << endl;
    			return;
    		}
    		else{
    			if(cnt == 0){
    				cout << "NO" << endl;
    				return;
    			}
    			else{
    				cout << "YES" << endl;
    				return;
    			}
    		}

    	}
    }
    else{
    	cout << "YES" << endl;
    	return;
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
