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

string filter(const string &s){
	string filtered;
	for(char c : s){
		if(c!= '-' && c!=';' && c!='_'){
			filtered += tolower(c);
		}
	}

	return filtered;
}

void solve(){
  	string s1, s2, s3;
  	getline(cin, s1);
  	getline(cin, s2);
  	getline(cin, s3);

  	string a1 = filter(s1);
  	string a2 = filter(s2);
  	string a3 = filter(s3);

  	vector<string> combi = {
  		a1+a2+a3,
  		a1+a3+a2,
  		a2+a1+a3,
  		a2+a3+a1,
  		a3+a1+a2,
  		a3+a2+a1
  	};
  	
  	int n;
  	cin >> n;
  	cin.ignore();

  	while(n--){
  		string x;
  		getline(cin,x);
  		string y = filter(x);

  		bool matched=false;
  		for(const string &comb: combi){
  			if(y==comb){
  				matched = true;
  				break;
  			}
  		}

  		cout << (matched? "ACC" : "WA") << endl;
  	}
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);


    solve();

    return 0;
}
