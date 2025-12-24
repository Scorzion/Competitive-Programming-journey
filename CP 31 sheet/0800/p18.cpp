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
    int n;
    cin >> n;

    vector<int> a(n);

    int cnt1 = 0;
    int cnt_1 = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1){
            cnt1++;
        }
        else{
            cnt_1++;
        }
    }

    if(cnt1>=cnt_1){
        if(cnt_1%2==0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    else{
        int z = cnt_1 - cnt1;
        cnt_1 -= z;
        int ans = 0;
        if(z%2==1){
            cnt_1 += z/2;
            ans += z/2 + 1;
        }
        else{
            ans += z/2;
            cnt_1 += z/2;
        }

        if(cnt_1%2==1){
            ans++;
        }
        cout << ans << endl;
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
