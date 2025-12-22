/**
    author: Sourav Sharma (@Sneaky_Typer)
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
    int n, k; 
    cin >> n >> k;
        
    if(k & 1){
        for(int i=0; i<k;i++){
            cout << n << " ";
        }
        cout << endl;
    }
    else{
        vector<int> a(k);
        int num_smaller = 0;
        for(int b = 30; b >= 0; b--){
            if((n >> b) & 1){
                if(num_smaller<k) num_smaller++;
                for(int i = 0; i < k; i++){
                    if(i==num_smaller-1) continue;
                    a[i] += (1<<b);
                }
            }
            else{
                for (int i = 0;i<num_smaller/2*2; i++){
                    a[i] += (1 << b);
                }
            }
        }
        for (int i = 0; i < k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
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
