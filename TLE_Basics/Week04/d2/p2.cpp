/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
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
 
int main(){
    init_code();
 
    //for more efficieny while taking cin and cout
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
 
    //my code starts here.
    int K;
    cin >> K;

    if(K>=60){
        int x = K-60;
        if(x<10){
        cout << 22 << ":" << 0 << x << endl;
        }
        else{
        cout << 22 << ":" << x << endl;
        }
    }
    else{
        if(K==0){
            cout << 21 << ":" << 0<< K ;
        }
        else{
        cout << 21 << ":" << K << endl;
        }
    }

    
    return 0;
}    