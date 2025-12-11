/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O(n log n) per test case
    SC    - O(n)
    Logic - Sort coins descending → prefix sums → if prefix sum is even, fix parity
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
    int n;
    cin >> n;

    vector<ll> a(n);
    for(auto &it:a) cin >> it;

    sort(a.rbegin(), a.rend());   

    vector<ll> pre(n+1,0);
    for(int i=0; i<n; i++){
        pre[i+1] = pre[i] + a[i];
    }

    const ll INF = 4e18;

    // smallest odd/even inside prefix 
    vector<ll> minOdd(n+1, INF), minEven(n+1, INF);
    ll odd = INF, ev = INF;

    for(int i = 0; i < n; i++){
        if(a[i]%2) odd = min(odd, a[i]);
        else ev = min(ev, a[i]);
        minOdd[i+1] = odd;
        minEven[i+1] = ev;
    }

    // largest odd/even outside prefix
    vector<ll> maxOdd(n+2, -INF), maxEven(n+2, -INF);
    ll o = -INF, e = -INF;

    for(int i = n-1; i >= 0; i--){
        if(a[i] % 2) o = max(o, a[i]);
        else e = max(e, a[i]);
        maxOdd[i] = o;
        maxEven[i] = e;
    }

    // Output answer for each k = 1..n
    for(int k = 1; k <= n; k++){

        ll sum = pre[k];

        // if odd → no reset → best score
        if(sum % 2 == 1){
            cout << sum << " ";
            continue;
        }

        ll best = 0;

        // Fix parity by swapping smallest odd in prefix with largest odd outside
        if(minOdd[k] != INF && maxOdd[k] != -INF){
            best = max(best, sum - minOdd[k] + maxOdd[k]);
        }

        // Fix parity by swapping smallest even in prefix with largest even outside
        if(minEven[k] != INF && maxEven[k] != -INF){
            best = max(best, sum - minEven[k] + maxEven[k]);
        }

        cout << best << " ";
    }

    cout << endl;
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
