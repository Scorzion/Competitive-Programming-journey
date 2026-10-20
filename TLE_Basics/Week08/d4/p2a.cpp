/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    int a, b;
    cin >> a >> b;

    int g = b;
    while(g>=1){
    	int num = (b/g) - (a-1)/g;
    	if(num>=2){
    		break;
    	}
    	g--;
    }

    cout << g << endl;
    return;

}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


   	solve();

    return 0;
}


// key concept was to look for at least 2 number in range of a to b, divisible by g;
// start iterating g from b. and g will not be greater than g and always greater than equal to 1.