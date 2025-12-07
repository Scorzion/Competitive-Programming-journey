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
#define int long long
const int MOD = 998244353;

int modpow(int a, int e){ 
    int r=1; 
    while(e){ if(e&1) 
     r=r*a%mod; 
     a=a*a%mod; 
    e>>=1; 
    } 
    return r; }
int modinv(int x){ return modpow(x, mod-2); }

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    vector<int> s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    int sum1=0,sum2=0;
    for(int v:s){
        sum1=(sum1+v)%mod;
        sum2=(sum2+modinv(v))%mod;
    }

    int a=1,b=0,c=0,d=1;

    while(m--){
        int t; cin>>t;
        if(t==1){
            int x; cin>>x; x%=mod;
            a=(a+x*c)%mod;
            b=(b+x*d)%mod;
        }else{
            swap(a,c);
            swap(b,d);
        }

        int num1=(a*sum1+b*n)%mod;
        int den1=(c*sum1+d*n)%mod; // conceptual only, we need aggregate inverse
        // compute resulting sum efficiently
        int res=0;
        for(int v:s){
            int num=(a*v+b)%mod;
            int den=(c*v+d)%mod;
            res=(res+num*modinv(den))%mod;
        }
        cout<<res<<"\n";
    }
}
