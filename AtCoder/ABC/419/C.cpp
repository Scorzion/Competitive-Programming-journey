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
    ll n;
    cin >> n;

    vector<pair<ll,ll>> v(n);

    ll sumx = 0;
    ll sumy = 0;
    for(ll i=0; i<n; i++){
    	cin >> v[i].first;
    	sumx += v[i].first;
    	cin >> v[i].second;
    	sumy += v[i].second;
    }

    ll sumxc = ceil(sumx*1.0/n*1.0);
    ll sumxf = floor(sumx/n);
    ll sumyc = ceil(sumy*1.0/n*1.0);
    ll sumyf = floor(sumy/n);


    // cout << sumx << endl;
    // cout << sumy << endl;

    vector<ll> ans;
    vector<ll> a(n,0);
    
    ll maxi = INT_MIN;
    for(int i=0; i<n; i++){
    	ll t = 0;
    	ll y = abs(sumyc - v[i].second);
    	t += y;
        if(v[i].first>= sumxc){
            t += abs(sumxc + y - v[i].first);
        }
        else{
            t += abs(sumxc - (v[i].first + y));
        }
    	
    	a[i] = t;

    	maxi = max(maxi, t);
    }
    ans.pb(maxi);

    maxi = INT_MIN;
    for(int i=0; i<n; i++){
        ll t = 0;
        ll y = abs(sumyc - v[i].second);
        t += y;
        if(v[i].first>= sumxf){
            t += abs(sumxf + y - v[i].first);
        }
        else{
            t += abs(sumxf - (v[i].first + y));
        }
        
        a[i] = t;

        maxi = max(maxi, t);
    }
    ans.pb(maxi);

    maxi = INT_MIN;
    for(int i=0; i<n; i++){
        ll t = 0;
        ll y = abs(sumyf - v[i].second);
        t += y;
        if(v[i].first>= sumxf){
            t += abs(sumxf + y - v[i].first);
        }
        else{
            t += abs(sumxf - (v[i].first + y));
        }
        
        a[i] = t;

        maxi = max(maxi, t);
    }
    ans.pb(maxi);

    maxi = INT_MIN;
    for(int i=0; i<n; i++){
        ll t = 0;
        ll y = abs(sumyf - v[i].second);
        t += y;
        if(v[i].first>= sumxc){
            t += abs(sumxc + y - v[i].first);
        }
        else{
            t += abs(sumxc - (v[i].first + y));
        }
        
        a[i] = t;

        maxi = max(maxi, t);
    }
    ans.pb(maxi);

    sort(ans.begin(),ans.end());
    cout << ans[0] << endl;
}

int main(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

	solve();

    return 0;
}
