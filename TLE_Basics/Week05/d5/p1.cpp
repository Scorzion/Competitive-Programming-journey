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

void solve(){
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<char> v;
	for(int i=0; i<n; i++){
		v.pb(s[i]);
	}

	int cnt = 0;
	int i=0;
	while(cnt <n/2 && i<=v.size()){
		if(v[i]=='T'){
			
			int j = i+1;
			
			while(v[j]!='M' && v[j]=='0'){
				j++;
			}

			if(v[j]=='M'){
				cnt++;
				// cout << v[i] << " ";
				v.erase(v.begin()+i);
				// cout << v[i] << " ";
				v[j-1]='0';
			}
			i=0;
		}
		else{
			i++;
		}
	}

	for(auto it: v){
		cout << it << " ";
	}
	cout << endl;

	


		
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
