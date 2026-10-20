/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    int n;
    cin >> n;
    
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int cnt = 0;
    int flag = 1;
    sort(a, a+n);
    while(flag!=0){
        int temp = 0;
        flag = 0;
        
        for(int i=n-1; i>=0; i--){
            if(a[i]%2 == 0 && flag == 0){
                cnt++;
                temp = a[i];
                flag = 1;
                a[i] /= 2;
            }
            
            if(a[i] == temp){
                a[i] /= 2;
            }
        }
    }
    
    cout << cnt << endl;
    return;
}

// gives TLE on Test 7


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
