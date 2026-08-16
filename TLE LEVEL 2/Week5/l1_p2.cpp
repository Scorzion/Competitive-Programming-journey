#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

// sum of first n natural number
// using recursion;

int sum(int n){
	if(n==1) return n;

	return n+sum(n-1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << sum(n) << endl;
    return 0;
}