#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

// recursive code for factorial
int fact(int n){
	if(n==0) return 1;
	
	return n*fact(n-1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}