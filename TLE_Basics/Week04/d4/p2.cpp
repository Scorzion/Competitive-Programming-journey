/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <climits>
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
	    int n, h, m;
        cin >> n >> h >> m;

        int arr[n][2];
        for(int i=0; i<n; i++){
        	for(int j=0; j<2; j++){
        		cin >> arr[i][j];
        	}
        }

        int time[n];
        for(int i=0; i<n; i++){
        	if(arr[i][0]==h && arr[i][1]==m){
        		cout << 0 << " " << 0 << endl;
        		return;
        	}
        	time[i] = (arr[i][0]*60 + arr[i][1]) - (h*60 + m);
        	if(time[i]<0){
        		time[i] += 1440;
        	}
        }

       	int a = INT_MAX;
        for(int i=0; i<n; i++){
      		a = min(time[i], a);
        }

        cout << a/60 << " " << a%60 << endl;
        return;
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
