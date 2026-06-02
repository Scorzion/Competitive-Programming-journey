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
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	a[i]+= i+1;
    }

    sort(a.begin(),a.end());

    ll ans = 0;
    for(int i=0; i<n; i++){
    	if(a[i]<=c){
    		c-=a[i]; ans++;
    	} 
    	else{
    		break;
    	}
    }

    cout << ans << endl;


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