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


int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        char a[n];
        for(int i=0; i<n; i++){
        	cin >> a[i];
        }


        int cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]=='.' && a[i-1]=='.' && a[i+1]=='.'){
                cnt=2;
                break;
            }
            else{
                if(a[i]=='.'){
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}


