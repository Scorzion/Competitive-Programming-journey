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
    string s1, s2;
    cin >> s1 >> s2;
   	
   	int ans = 0;
    int y1, y2, d1, d2, m1, m2;
    y1 = y2 = d1 = d2 = m1 = m2 = 0;

    y1 = (s1[0]-48)*1000 + (s1[1]-48)*100 + (s1[2]-48)*10 + (s1[3]-48);
    y2 = (s2[0]-48)*1000 + (s2[1]-48)*100 + (s2[2]-48)*10 + (s2[3]-48);

    d1 = (s1[5]-48)*10 + (s1[6]-48);
    d2 = (s2[5]-48)*10 + (s2[6]-48);

    m1 = (s1[8]-48)*10 + (s1[9]-48);
    m2 = (s2[8]-48)*10 + (s2[9]-48);

    int cnt_leap = y2/4 - y1/4;
    int cnt_year = y2 - y1;

    if(y2%4==0){
    	cnt_leap--;
    }
    if(y1%4==0){
    	cnt_leap--;
    }

    if(cnt_year > 1){
    	cnt_year--;
    	
    }



}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
0
    solve();

    return 0;
}
