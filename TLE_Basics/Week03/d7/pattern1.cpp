/*
Author: Sourav Sharma (@Sneaky_Typer)
Go for Gold.
*/

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
	for(int i=0; i<5; i++){

		for (int j=0; j<6; j++){
			cout << "*";
		}
		cout << " " << endl;
	}
	return 0;
}	