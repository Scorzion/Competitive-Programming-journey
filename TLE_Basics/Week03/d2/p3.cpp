/**
*	Author: Sourav Sharma (@Sneaky_Typer)
*	Go for Gold.
**/

#include <bits/stdc++.h>
#include <cctype>
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

	//for more efficieny while taking cin and cout
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	cout.tie(NULL);

	//my code starts here.
	int n;
	cin >> n;

	int A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
		cout << A[i] << endl;
	}


	int B[n];
	for(int j=0; j<n; j++){
		cin >> B[j];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(A[i] == B[j]){
				cout << A[i] << " " << B[j] << endl;
			}
		}
	}

	
	return 0;
}

