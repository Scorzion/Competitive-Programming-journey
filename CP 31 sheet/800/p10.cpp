/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    - O()
    Logic - 

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
    vector<vector<char>> v(10, vector<char>(10));
    for(int i=0; i<10; i++){
    	string s;
    	cin >> s;
    	for(int j=0; j<10; j++){
    		v[i][j] = s[j];
    	}
    }

    ll score = 0;
    for(int i=0; i<10; i++){
    	for(int j=0; j<10; j++){
            if(v[i][j]=='X'){
                if(i==0 || i==9 || j==0 || j==9){
                    score += 1;
                    continue;
                }

                if(i==1 || i==8 || j==1 || j==8){
                    score += 2;
                    continue;
                }

                if(i==2 || i==7 || j==2 || j==7){
                    score += 3;
                    continue;
                }

                if(i==3 || i==6 || j==3 || j==6){
                    score += 4;
                    continue;
                }

                if(i==4 || i==5 || j==4 || j==5){
                    score += 5;
                    continue;
                }
            }
    	}
    }

    cout << score << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
