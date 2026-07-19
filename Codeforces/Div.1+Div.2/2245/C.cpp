#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n, k;
    cin >> n >> k;

    if(n==1 && k==0){
        cout << "NO" << endl;
        return;
    }

    if(k==0){
        if(__builtin_popcount(n)==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int g = n&(-n);
            int h = n-g;

            for(int i=n-1; i>=0; i--){
                if(i!=g && i!=h) cout << i << " ";
            }

            cout << g << " " << h << endl;
        }
        return;
    }


    if(32-__builtin_clz(n)==32-__builtin_clz(k>0? k: 1)){
        if(__builtin_popcount(n)==1){
        
            if(k>=n){
                cout << "YES" << endl;

                for(int i=n-1; i>=0; i--){
                    if(i!=(n^k)) cout << i << " ";
                }

                cout << (n^k) << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
            return;
        }

        cout << "YES" << endl;
        
        for(int i=n-1; i>=0; i--){
            if(i!=(n^k)) cout << i << " ";
        }
        cout <<( n^k )<< endl;

        
    }
    else{
        cout << "NO" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}