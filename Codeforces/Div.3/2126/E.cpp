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

void solve(){
    int n;
    cin >> n;

    int mini = INT_MAX;
    int p[n];
    for(int i=0; i<n; i++){
    	cin >> p[i];
    	mini = min(p[i],mini);
    }

    int s[n];
    for(int i=0; i<n; i++){
    	cin >> s[i];
    	mini = min(s[i],mini);
    }

    if(n==1){
        if(p[0]==s[0]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    int a[2*n];
    for(int i=0; i<n; i++){
        a[i] = p[i];
    }

    for(int i=0; i<n; i++){
        a[n+i] = s[i];
    }

    int flag = 0;
    int ans = 1;
    for(int i=2; i*i<=mini; i++){
        for(int j=0; j<2*n; j++){
            if(a[j]%i!=0){
                flag = 1;
                break;
            }
        }

        if(flag==0){
            ans = i;
        }
    }  

    if(ans==1){
        flag = 0;
        for(int j=0; j<2*n; j++){
                if(a[j]%mini!=0){
                    flag = 1;
                    break;
                }
        }

        if(flag ==0){
            ans = mini;
        }
    }

    if(ans==1){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }

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
