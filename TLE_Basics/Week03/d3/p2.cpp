/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <string>
#include <utility>
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
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    char arr[s.length() + 1];
    for(int i=0; i<sizeof(arr); i++){
        arr[i] = s[i];
    }
    
    for(t; t>0; t--){
        
        for(int i=0; i<sizeof(arr) ; i++){
            if(arr[i] == 'G'){
                continue;
            }
            else{
                if(arr[i+1]=='G' && arr[i]=='B'){
                    swap(arr[i], arr[i+1]);
                    arr[i+1]='A';
                }
                else{
                    continue;
                }
             }
         }
        
        for(int i=0; i<sizeof(arr); i++){
            if(arr[i]=='A'){
                arr[i] ='B';
            }
            else{
                continue;
            }
        }
         
    }
    int size_arr = sizeof(arr)/sizeof(char);
    string sn = "";
    sn = arr;

    cout << sn << endl;


    return 0;
}
 