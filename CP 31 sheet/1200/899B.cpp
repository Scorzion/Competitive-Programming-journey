#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    bool feb = 0;
    int fidx = 0;
    bool leap = 0;

    for(auto &it:a){
    	cin >> it;
    }

    bool start = 1;
    if(a[0]!=31){
    	start = 0;
    }

    if(start){
    	for(int i=0; i<n; i++){
    		if(i%2==0){
    			if(a[i]!=31){
    				cout << "NO" << endl;
    				return;
    			}
    		}
    		else{
    			if(a[i]==28 || a[i]==29){
    				if(!feb){
    					feb = 1;
    					fidx = i;
    					if(a[i]==29) leap = 1;
    				}
    				else{
    					if(i-fidx==12){
    						cout << "NO" << endl;
    						return;
    					}

    					if(leap && a[i]==29){
    						cout << "NO" << endl;
    						return;
    					}
    				}
    			}
    			else if(a[i]==31){
    				cout << "NO" << endl;
    				return;
    			}
    			else{
    				continue;
    			}
    		}
    	}
    }
    else{
    	for(int i=0; i<n; i++){
    		if(i%2==1){
    			if(a[i]!=31){
    				cout << "NO" << endl;
    				return;
    			}
    		}
    		else{
    			if(a[i]==28 || a[i]==29){
    				if(!feb){
    					feb = 1;
    					fidx = i;
    					if(a[i]==29) leap = 1;
    				}
    				else{
    					if(i-fidx!=12){
    						cout << "NO" << endl;
    						return;
    					}

    					if(leap && a[i]==29){
    						cout << "NO" << endl;
    						return;
    					}
    				}
    			}
    			else if(a[i]==31){
    				cout << "NO" << endl;
    				return;
    			}
    			else{
    				continue;
    			}
    		}
    	}
    }
    cout << fidx << endl;
    cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}