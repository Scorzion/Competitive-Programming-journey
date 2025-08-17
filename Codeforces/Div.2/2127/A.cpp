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

bool checker(int a, int b, int c){


	if(a==0 && a==b && b==c){
		flag = 0;
	}

	if(a!=0 && a==b && b==c){
		flag = 1;
	}

	int cnt = 0;
	if(a==-1){
		cnt++;
	}

	if(b==-1){
		cnt++;
	}

	if(c==-1){
		cnt++;
	}

	if(cnt==3){
		flag = 1;
	}

	if(cnt==2){
		if(a==0 || b==0 || c==0){
			flag = 0;
		}
		
		if(a>0 || b>0 || c>0){
			flag = 1;
		}
	}

	if(cnt==1){
		if(a==-1){
			if(b-c==0){
				if(b==0){
					flag = 0;
				}

				flag = 1;
			}

			if(abs(b-c)==1){
				if(b<2 || c<2){
					return 0;
				}
				
				flag = 1;
			}

			if(abs(b-c)>1){
				flag = 0;
			}
		}
	}

	int mex = 0;
	if(a!=-1 && b!=-1 && c!=-1){
		vector<int> arr = {a,b,c};
		sort(arr.begin(), arr.end());

		int val = arr[2]-arr[0];
		int spac1 = arr[1]-arr[0];
		int spac2 = arr[2]-arr[1];
		mex = 0;

		if(spac1 == 1){
			if(arr[0]>0){
				mex = 0;
				if(val==mex){
					flag = 0;
				}
				else{
					flag = 0;
				}
			}
		}

		if(spac1 == 0){
			if(spac2==1){
				mex = arr[2]+1;
				if(val==mex){
					flag = 1;
				}
				else{
					flag = 0;
				}
			}
			if(spac2>1){
				mex = arr[1]+1;
				if(val==mex){
					flag = 1;
				}
				else{
					flag = 0;
				}
			}
		}

		if(spac1 > 1){
			mex = arr[0]+1;
			if(val==mex){
					flag = 1;
			}
			else{
					flag = 0;
			}
		}
	}

	if(flag==0){
		return ;
	}
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }

    bool ans = 0;
    for(int i=0; i<n-2; i++){
    	bool ans = checker(a[i], a[i+1], a[i+2]);

    	if(ans==1){
    		cout << "YES" << endl;
    		break;
    	}
    }

    cout << "NO" << endl;
  
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
