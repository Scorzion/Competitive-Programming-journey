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

    int sz = (n*(n-1))/2;
    vector<int> a(sz);

    for(auto &it:a){
    	cin >> it;
    } 

    sort(a.rbegin(),a.rend());

    vector<int> ans;
    int k = 0;
 	ans.pb(a[0]);
    for(int i=1; i<n; i++){
    	k+= i;
    	ans.pb(a[k-1]);
    }

    for(auto it:ans){
    	cout << it << " ";
    }
    cout << endl;



   



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