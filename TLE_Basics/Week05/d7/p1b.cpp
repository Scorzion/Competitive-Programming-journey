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

	int flag=0;
	int count_of_empty = 0;
	int current_count_of_empty = 0;

	for(auto it : s){
		if(it == '.'){
			 current_count_of_empty++;
		}
		else{
			count_of_empty	+= current_count_of_empty;
			if(current_count_of_empty>=3)
				flag =1;
			current_count_of_empty = 0;
		}
	}

	count_of_empty += count_of_empty;
	if(current_count_of_empty>=3){
		flag = 1;
	}

	if(flag)
		cout << 2 << endl;
	else
		cout << count_of_empty << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
