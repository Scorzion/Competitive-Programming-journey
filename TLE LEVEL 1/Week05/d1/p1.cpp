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
    string s;
    cin >> s;

    vector<int> a(26, 0);
    for(int i=0; i<s.size(); i++){
        a[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        while(a[i]>0){
            cout << (char) ('a' + i);
            a[i]--;
        }
    }
    
    cout << endl;

    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
