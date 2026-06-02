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

ll checker(vector<int> a){
	ll sum = 0;
    int negCount = 0;
    int minAbs = INT_MAX;

    for(int x : a) {
        if (x < 0) negCount++;
        sum += abs(x);
        minAbs = min(minAbs, abs(x));
    }

    if(negCount % 2 == 0) {
        return sum;
    }
    else{
        return sum-2LL*minAbs;
    }
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    ll sum = 0;
    for(auto &it:a) cin >> it;

    cout << checker(a) << endl;
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