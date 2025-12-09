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
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int t[k];
    for(int i=0; i<n; i++){
        cin >> t[i];
    }

    int j=0;
    while(k--){
        int l = 0;
        int h = n-1;

        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]>t[j]){
                h = mid-1;
            }

            if(a[mid]<t[j]){
                h = mid+1;
            }

            if(a[mid]==t[j]){
                cout << "YES" << endl;
                break;
            }
        }

        cout << l << h << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();
    
    return 0;
}
