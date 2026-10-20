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

int sum_digits(int n){
    int sum=0;
    while(n != 0){
        sum += n%10;
        n /= 10;
        }

    return sum;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

        int k;
        cin >> k;

        int count = 0;
        int n = 1;

        while(n>0){

            int sum = sum_digits(n);
            if(sum == 10){
                count++;
            }
            
            if(count==k){
                cout << n << endl;
                break;
            }
            n++;
        }
    return 0;
}
