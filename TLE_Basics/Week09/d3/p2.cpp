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

int helper(int val, int n, int arr[]){
	int l = 0;
	int h = n-1;
	int ans = -1;

	while(l<=h){
		int mid = (l+h)/2;

		if(arr[mid]<=val){
			ans = mid;
			l = mid + 1;
		}
		else{
			h = mid - 1;
		}
	}

	return ans+1;
}

void solve(){
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a,a+n);

	int k;
	cin >> k;

	while(k--){
		int l,r;
		cin >> l >> r;

		int ans1 = helper(l-1, n, a);
		int ans2 = helper(r, n, a);

		cout << ans2 - ans1 << " ";
		
	}
	cout << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
