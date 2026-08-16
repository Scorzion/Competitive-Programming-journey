#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

int fib(int n){
	if(n==0) return n;
	if(n==1) return n;

	return fib(n-1)+fib(n-2);
}

void solve(){
    int n;
    cin >> n;

    cout << fib(n) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}