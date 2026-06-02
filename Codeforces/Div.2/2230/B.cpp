/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
void init_code(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
}
#else
void init_code(){}
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve(){
    string s;
    cin >> s;

    reverse(s.begin(),s.end());
    map<int,int> mp;

    int n = s.length();
    for(int i=0; i<n; i++){
    	s[i]-=48;
    	mp[s[i]]++;
    }

    ll ans = 0;
    ans += mp[4];
    ans += mp[8];
    ans += (mp[0]/2);

    int idx = 0;
    for(int i=n-1; i>=0; i--){
    	if(s[i]==0){
    		idx = i;
    		break;
    	}
    }

    mp.clear();

    vector<int> v(n,0);
    for(int i=idx; i<n; i++){
    	if(s[i]== 0 ){
    		mp[s[i]]++;
    	}
    	else{
    		if(mp[0]>0){
    			if(s[i]==2 || s[i]==6){
    				ans++;
    				mp.clear();
    			}
    		}
    	}
    }

    int vala = 0;
    for(int i=0; i<n; i++){
    	if(s[i]==2 || s[i]==6){
    		vala++;
    	}
    	else{
    		if(vala>0){
    			if(s[i]%2==1){
    				vala--;
    				ans++;
    			}
    		}
    	}
    }

    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}