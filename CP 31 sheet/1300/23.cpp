#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

template<typename T>
vector<T> getPrimeFactors(T n){
    vector<T> factors;
    for(T i=2; i*i <= n; i++){
        while(n%i==0) {
            factors.pb(i);
            n /= i;
        }
    }
    if(n>1) factors.pb(n);
    return factors;
}

template <typename T>
T power(T a, T n)
{
    return round(pow(2, (log2(a)*n)));
}

void solve(){
    int n;
    cin >> n;

    vector<int> v = getPrimeFactors(n);
    map<int,int> mp;

    for(auto it:v){
    	mp[it]++;
    }

    int a=1, b=1, c=1;
    int cnt=0;
    if(sz(mp)>=3){
    	cout << "YES" << endl;
    	for(auto it:mp){
    		cnt++;
    		if(cnt==1){
    			a = power(it.first,it.second);
    		}
    		else if(cnt==2){
    			b = power(it.first,it.second);
    		}
    		else{
    			c *= power(it.first,it.second);
    		}
    	}
    	cout << a << " " << b << " " << c << endl;
    	return;
    }
    else if(sz(mp)>0){
    	int freq = 0;
    	for(auto it:mp) freq+= it.second;
    		if(sz(mp)==2 && freq>=4){
    			cnt = 0;
    			for(auto it:mp){
    				cnt++;
    				if(cnt==1){
    					a = power(it.first,1);
    					c *= power(it.first,it.second-1);
    				}
    				else{
    					b = power(it.first,1);
    					c *= power(it.first,it.second-1);
    				}
    			}
    		}
    		else if(sz(mp)==1 && freq>=6){
    			for(auto it:mp){
    				a = power(it.first,1);
    				b = power(it.first,2);
    				c = power(it.first,it.second-3);
    			}
    		}
    		else{
    			cout << "NO" << endl;
    			return;
    		}

    		cout << "YES" << endl;
    		cout << a << " " << b << " " << c << endl;
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