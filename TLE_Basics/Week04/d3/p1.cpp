/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

// for input and output.
void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

// declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"

int main() {
    init_code();

    // for more efficiency while taking cin and cout
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    // my code starts here.
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result;

    for (int i = 0; i < n - 1; i++) {
        result.pb(arr[i]);  

        if (abs(arr[i] - arr[i + 1]) > 1) {
            
            if (arr[i] < arr[i + 1]) {
                for (int j = arr[i] + 1; j < arr[i + 1]; j++) {
                    result.pb(j);
                }
            } else {
                for (int j = arr[i] - 1; j > arr[i + 1]; j--) {
                    result.pb(j);
                }
            }
        }
    }
    result.pb(arr[n - 1]); 

    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
