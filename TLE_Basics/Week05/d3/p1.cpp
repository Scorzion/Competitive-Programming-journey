/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
using namespace std;
 
//for input and output.
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}
 
//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

unsigned long long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    unsigned long long  s = ((k-1)*k)/2 *1LL;
    unsigned long long num = 2*s - 1;
    
    unsigned long long sum = 0;
    for(unsigned long long i=1; i<=k; i++){
        num += 2;
        sum += num;
    }
    
    return sum;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int k;
    cin >> k;

    cout << sumOfGroup(k) << endl;
    return 0;
}
