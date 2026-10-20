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

int gcd(int a, int b){
	
	vector<int> a_divi;
	for(int i=1; i*i <= a; i++){
		if(a%i==0){
			a_divi.pb(i);
			if(i!=a/i){
				int ad = a/i;
				a_divi.pb(ad);
			}
		}
	}

	vector<int> b_divi;
	for(int i=1; i*i <= b; i++){
		if(b%i==0){
			b_divi.pb(i);
			if(i!=b/i){
				int bd = b/i;
				b_divi.pb(bd);
			}
		}
	}

	sort(a_divi.begin(), a_divi.end());
	sort(b_divi.begin(), b_divi.end());




	int x = 0;
	int flag = 0;
	for(int i=a_divi.size()-1; i>=0; i--){
		for(int j=b_divi.size()-1; j>=0; j--){
			if(a_divi[i]==b_divi[j]){
				x= a_divi[i];
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}

	return x;
}

//inefficent method as it will give TLE.

void solve(){
	int n;
	cin >> n;

	vector<int> v;
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			int y = gcd(i,j);
			v.pb(y);
		}
	}

	int maxi = INT_MIN;
	for(int i=0; i<v.size(); i++){
		maxi = max(maxi, v[i]);
	}

	cout << maxi << endl;
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
