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
    int n, q;
    cin >> n >> q;

    vector<int> sq(n, 1);

    int a[q];
    for(int i=0; i<q; i++){
    	cin >> a[i];
    }

    if(n==1){
    	for(int i=0; i<q; i++){
    		if(i%2==0){
    			cout << 1 << endl;
    		}
    		else{
    			cout << 0 << endl;
    		}
    	}
    	return;
    }

    int cnt = 0;
    for(int i=0; i<q; i++){
    	if(sq[a[i]-1]==0){
    		sq[a[i]-1]=1;

    		if(a[i]-1 == 0 && sq[a[i]]==1){
    			cnt--;
    		}

    		if(a[i]-1 == n-1 && sq[a[i]-2]==1){
    			cnt--;
    		}

    		if(sq[a[i]-2]==1 && sq[a[i]]==1  && a[i]-1!=0 && a[i]-1!=n-1){
    			cnt--;
    		}

    		if(sq[a[i]-2]==0 && sq[a[i]]==0 && a[i]-1!=0 && a[i]-1!=n-1){
    			cnt++;
    		}

    	}
    	else{
    		sq[a[i]-1]=0;

    		if(a[i]-1 == 0 && sq[a[i]]==1){
    			cnt++;
    		}

    		if(a[i]-1 == n-1 && sq[a[i]-2]==1){
    			cnt++;
    		}

    		if(sq[a[i]-2]==1 && sq[a[i]]==1 && a[i]-1!=0 && a[i]-1!=n-1){
    			cnt++;
    		}

    		if(sq[a[i]-2]==0 && sq[a[i]]==0 && a[i]-1!=0 && a[i]-1!=n-1){
    			cnt--;
    		}
    	}

    	cout << cnt << endl;
    }
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    solve();

    return 0;
}
