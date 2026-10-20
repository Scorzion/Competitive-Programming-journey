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
    int num;    //no. of rows
    cin >> num;
    
            
    int n=1;
    for(int i=1; i<=num; i++){
            if(i%2==0){
                for(int j=1; j<=i; j++){
                cout << n << " ";
                n++;
                }
            }
            else if(i==1){
                cout << 1 << " ";
                n++;
                }
                
                else{
                n=n+i-1;
                for(int j=1; j<=i; j++){
                cout << n << " ";
                n--;
                }
                n=n+i+1;
            }
        cout << "\n" ;
    }
  
    return 0;
}
 