/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    multiset<int, greater<int>> b; 
    multiset<int> s;               

   	int trades = 0;

    for(int i=0; i<n; i++){
        char typ;
        int val;
        cin >> typ >> val;

        if(typ=='B'){
            b.insert(val);
        }
        else{
            s.insert(val);
        }

        bool flag = 1;
        while(!b.empty() && !s.empty() && flag){
            auto mxb = b.begin();
            auto mns = s.begin();

            if(*mxb >= *mns){
                trades++;
                b.erase(mxb);
                s.erase(mns);
            }
            else{
            	flag = 0;
            }
        }
    }

    cout << trades << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}