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
	int x;
	cin >> x;

	int i=1;
	while(i<=x){
		int a = x%i;
		if(a==0 && i!=1 && i!=x){
			cout << "NO" << endl;
			break;
		}
		else if(a==0 && i==x){
			cout << "YES" << endl;
		}
		i++;
	}
	return 0;

}

