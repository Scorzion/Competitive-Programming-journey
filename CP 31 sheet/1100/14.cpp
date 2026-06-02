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

    vector<int> a(n), b(n);
    
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;
    
    int l = -1;
    int r = -1;
    
    bool chk =0;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            l = i;
            break;
        }
    }
    
    for(int i=n-1; i>=0; i--){
        if(a[i]!=b[i]){
            r = i;
            break;
        }
    }
    
    
    if(l==-1 && l==r){
        cout << 1 << " " << 1 << endl;
        return;
    }
    
    for(int i=l-1; i>=0; i--){
        if(b[i]==b[l] || (b[i]<b[i+1] && b[i]==a[i])){
            l--;
        }
        else{
            break;
        }
    }
    
    for(int i=r+1; i<n; i++){
        if(b[i]==b[r] || (b[i]>b[i-1] && b[i]==a[i])){
            r++;
        }
        else{
            break;
        }
    }
    
    cout << l+1 << " " << r+1 << endl;
    
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