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
    string s;
    cin >> s;

    if(s.size()<3){
    	cout << s << endl;
    	return;
    }

    vector<int> v(26,0);
    for(int i=0; i<s.size(); i++){
    	v[s[i]-'A']++;
    }

    for(int i=0; i<v[19]; i++){
    	cout << 'T';
    }

    for(int i=0; i<v[13]; i++){
    	cout << 'N';
    }
    for(int i=0; i<v[5]; i++){
    	cout << 'F';
    }

    for(int i=0; i<26; i++){
    	if(i!=19 && i!=13 && i!=5 ){
            while(v[i]>0){
                cout << (char) ('A'+i);
                v[i]--;
            }
        }
    	
    }

    cout << endl;
    return;

    

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
