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
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int l = n-3;
    int r = n-2;

    int pre = 0;
    int mid = 0;
    int sfx = 0;

    for(int i=0; i<n-2; i++){
        pre = mid = sfx = 0;
        for(int j=0; j<=l; j++){
            pre += a[j];
        }

        for(int j=l+1; j<=r; j++){
            mid += a[j];
        }

        for(int j=r+1; j<n; j++){
            sfx += a[j];
        }

        if((pre%3==mid%3 && mid%3==sfx%3) || (pre%3!=mid%3) && (mid%3!=sfx%3) && (pre%3!=sfx%3)){
            cout << l+1 << " " << r+1 << endl;
            return;
        }

        l--;
    }

    l = 0;
    r = n-2;
    for(int i=2; i<n; i++){
        pre = mid = sfx = 0;
        for(int j=0; j<=l; j++){
            pre += a[j];
        }

        for(int j=l+1; j<=r; j++){
            mid += a[j];
        }

        for(int j=r+1; j<n; j++){
            sfx += a[j];
        }

        if((pre%3==mid%3 && mid%3==sfx%3) || (pre%3!=mid%3) && (mid%3!=sfx%3) && (pre%3!=sfx%3)){
            cout << l+1 << " " << r+1 << endl;
            return;
        }

        r--;
    }

    cout << 0 << " " << 0 << endl;
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
