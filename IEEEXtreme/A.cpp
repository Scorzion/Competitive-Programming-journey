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

int search(vector<int> &arr, int x, bool findStart) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ind = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        
        if (x == arr[mid]) {
            ind = mid;

            if(findStart == true)
                high = mid - 1;
            else
                low = mid + 1;
        }

        else if (x < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    if(ind!=-1)
    	ind++;
    
    return ind;
}

vector<int> find(vector<int> &arr, int x) {

    int first = search(arr, x, true);

    int last = search(arr, x, false);
    vector<int> res = {first, last};
    return res;
}

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for(int i=0; i<n; i++){
    	cin >> v[i];
    }

    while(q--){
    	int k;
    	cin >> k;
    	vector<int> res = find(v,k);
    	cout << res[0] << " " << res[1] << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
    return 0;
}
