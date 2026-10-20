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

    int n, m;
    cin >> n >> m;

    int seq[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> seq[i][j];
        }
    }

    int check[n+1][n+1];

    for(int i=0; i<n+1; i++){
        for(int j=0; j<n+1; j++){
            check[i][j]=0;
        }
    }
    for(int j=1; j<n+1; j++){
    	check[0][j] = j;
    }
    for(int i=1; i<n+1; i++){
    	check[i][0] = i;
    }
    
    int x = 0;
    int y = 0;

    for(int i=0; i<m; i++){
    	for(int j=0; j<n-1; j++){
                x = seq[i][j];
                y = seq[i][j+1];

                check[x][y]++;
                check[y][x]++;
    	}
    }

    int count = 0;

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            if(i!=j){
                if(check[i][j]==0){
                    count++;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
    }

    cout << count/2 << endl;
    return 0;
}
