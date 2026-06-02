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
    ll n, x, s;
    cin >> n >> x >> s;

    string u;
    cin >> u;

    ll cnti = 0;
    ll cnta = 0;
    for(int i=0; i<n; i++){
    	if(u[i]=='I'){
    		cnti++;
    	}

    	if(u[i]=='A'){
    		cnta++;
    	}
    }

    bool flag = 0;
    if(cnti<x){
    	flag = 1;
    }

    if(u[n-1]=='I'){
    	cnti--;
    }


    vector<int> tab(x,0);
    ll asat = 0;
    for(int i=0; i<n; i++){
    	if(u[i]=='I'){
    		for(int i=0; i<x; i++){
    			if(tab[i]==0){
    				tab[i]++;
    				break;
    			}
    		}
    	}
    	else if(u[i]=='A'){
			for(int i=0; i<x; i++){
				if(flag){
					if(asat<(x-cnti) && tab[i]==0){
						tab[i]++;
						asat++;
					}

					if(asat>=(x-cnti)){
						flag = 0;
					}
				}
				else{
					if(tab[i]<s){
						tab[i]++;
						break;
					}
				}
				
			}
    	}
    	else{
			for(int i=0; i<x;i++){
				if(tab[i]<s && tab[i]>0){
					tab[i]++;
					break;
				}
			}
		}
    }

    ll ans = 0;
    for(auto it:tab){
    	ans += it;
    }
    cout << ans << endl;
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