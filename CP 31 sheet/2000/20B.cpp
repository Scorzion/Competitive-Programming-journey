/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

/**
    TC    - O()
    SC    -
    Logic - O()

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

void calc_roots(int a,int b,int c, ll check){
	long double D  = sqrtl((long double) check);

	long double root1 = ((-1.0*b) - D)/(2.0*a);
	long double root2 = ((-1.0*b) + D)/(2.0*a);



	cout << fixed << setprecision(5) << min(root1, root2) << endl;
	if(check > 0){
		cout << fixed << setprecision(5) << max(root1, root2) << endl;
	}
	return;
}


void solve(){
    int a, b, c;
    cin >> a >> b >> c;
   
    if(a==0){
    	if(b==0){
    		if(c==0){
    			cout << -1 << endl;
    			return;
    		}
    		else{
    			cout << 0 << endl;
    			return;
    		}
    	}
    	else{
    		cout << 1 << endl;
    		cout << fixed << setprecision(5) << (-1.0*c)/(1.0*b) << endl;
    		return;
    	}
    }

    ll check = (1LL*b*b) - (4LL*a*c);

    if(check < 0){
    	cout << 0 << endl;
    	return;
    }
    else{
    	if(check == 0){
    		cout << 1 << endl;
    		calc_roots(a,b,c, check);
    	}
    	else{
    		cout << 2 << endl;
    		calc_roots(a,b,c, check);
    	}
    }
    return;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();
}
