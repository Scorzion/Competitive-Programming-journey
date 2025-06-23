/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 

 // Problem Haybale Stacking
// link : https://usaco.org/index.php?page=viewproblem2&cpid=104
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

    vector<int> diff(n+1,0);
    while(k--){
    	int a,b;
    	cin >> a >> b;

    	diff[b]--;
    	diff[a-1]++;
    }

    vector<int> arr(n);
    arr[0] = diff[0];
    for(int i=1; i<n; i++){
    	arr[i] = diff[i] + arr[i-1];
    }

    sort(begin(arr),end(arr));
    cout << arr[n/2] << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
