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
    int t;
    cin >> t;
    while(t>0){
        t--;
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        int count1 =0;
        int count2 =0;
        for(int i=0; i<n; i++)
        {
            int x = i%2;
            int y = a[i]%2;
            if(x==y){
                continue;
            }
            else{
                //cout << x <<" " << y << "\n";
                if(y==0){
                    count1++;
                }
                else{
                    count2++;
                }
            }
        }
        if(count1 != count2){
            cout << -1 << endl;
        }
        else{
            cout << count1 << endl; // no. of possible swaps

        }

    }
    return 0;
}
 