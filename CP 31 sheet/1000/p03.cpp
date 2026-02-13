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
    int n, p;
    cin >> n >> p;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
    	cin >> b[i];
    }

    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
    	v[i].first = b[i];
    	v[i].second = a[i];
    }

    sort(v.begin(), v.end());

    ll cost = p;
    ll people = 1;

    for(auto it:v){
        ll num_sharedpeople = it.second;
        ll sharingcost = it.first;

        if(sharingcost>=p){
            break;
        }
        if(people + num_sharedpeople>n){
            cost += (n - people)*sharingcost;
            people = n; 
            break;
        }
        else{
            cost += num_sharedpeople * sharingcost;
            people += num_sharedpeople;
        }
    }

    cost += (n-people)*p;
    cout << cost << endl;
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
