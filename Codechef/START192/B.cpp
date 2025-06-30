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
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    int flag = 0;
    for(int i=1; i<n; i++){
    		if(a[i]!=a[0])
    			flag = 1;
    }

    if(flag==0){
    	cout << 0 << endl;
    	return;
    }


    int cnt1 = 0;
    int cnt2 = 0;

    for(int i=0; i<n; i++){
    	if(a[i]==1)
    		cnt1++;

    	if(a[i]==2)
			cnt2++;
	}


	if(a[0]==1 && a[1]==2){
			cout << cnt2 << endl;
			return;
	}

	if(a[n-2]==2 && a[n-1]==1){
		cout << cnt2 << endl;
		return;
	}

	for(int i=1; i<n-1; i++){
		if(a[i-1]==2 && a[i]==1 && a[i+1]==2){
			cout << cnt2 << endl;
			return;
		}

	}

	int cnt11 = 0;
	for(int i=1; i<n; i++){
		if(a[i-1]==1 && a[i]==1){
			cnt11++;
			i++;
		}
	}

	if(cnt1%2==1){
		cout << cnt2 << endl;
	}
	else{
		if(cnt11*2 == cnt1){
			
			cout << min(cnt2, cnt11) << endl;
		}
		else{
			cout << cnt2 << endl;
		}
		
	}
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
