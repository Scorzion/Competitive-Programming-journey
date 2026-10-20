/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
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
 
    //for more efficieny while taking cin and cout
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);
 
    //my code starts here.
    int N;
    cin >> N;

    string S;
    int arr[N][N];
    for(int i=0; i<N; i++){
        cin >> S;
        for(int j=0; j<N; j++){
            arr[i][j]=S[j]-'0';
        }
    }

    int b[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(j ==0 || j == N-1 || i==0 || i == N-1){
               if(i==0 && j!=0){
                    b[0][j]=arr[0][j-1];
               }
               if(j==0 && i!=N-1){
                    b[i][0]=arr[i+1][0];
               }
               if(i==N-1 && j!=N-1){
                    b[N-1][j]=arr[N-1][j+1];
               }
               if(j==N-1 && i!=0){
                    b[i][N-1]=arr[i-1][N-1];
               }
            }
            else{
                b[i][j]=arr[i][j];
            }
        }
    }

    //print
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << b[i][j];
        }
        cout << endl;
    }

    
    return 0;
}    