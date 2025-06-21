/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    vector<pair<int,int>> k = {
    	{xk-b,yk+a},
    	{xk+b,yk+a},
    	{xk-b,yk-a},
    	{xk+b,yk-a},
    	{xk+a,yk+b},
    	{xk+a,yk-b},
    	{xk-a,yk+b},
    	{xk-a,yk-b}
    };

    vector<pair<int,int>> q = {
    	{xq-b,yq+a},
    	{xq+b,yq+a},
    	{xq-b,yq-a},
    	{xq+b,yq-a},
    	{xq+a,yq+b},
    	{xq+a,yq-b},
    	{xq-a,yq+b},
    	{xq-a,yq-b}
    };

    set<pair<int,int>> s;
    for(int i=0; i<k.size(); i++){
    	for(int j=0; j<q.size(); j++){
    		if(k[i].first==q[j].first && k[i].second==q[j].second){
    			s.insert({k[i].first,k[i].second});
    			q.erase(q.begin()+j);
    		}
    	}
    }

    cout << s.size() << endl;
    return;

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
