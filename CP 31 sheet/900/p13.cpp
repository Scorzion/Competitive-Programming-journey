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
#include <climits>
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
    int cnt0 = 0;
    int mini = INT_MAX;
    for(auto &it:a){
        cin >> it;
        if(it==0) cnt0++;
        else mini = min(mini, it);
    }

    int cnt = 0;
    for(int i=1; i<n; i++){
        if(a[i]==0 && a[i-1]!=0) cnt++;
    }

    if(a[n-1]==0) cnt--;
    if(cnt>0){
        cout << 2 << endl;
    }
    else{
        if(cnt0==n){
            cout << 0 << endl;
            return;
        }
        if(cnt0==0){
            cout << 1 << endl;
            return;
        }

        cout << min(2,mini) << endl;
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
