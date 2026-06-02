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

int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp1;
        int n = arr1.size();
        for(int i=0; i<n; i++){
            while(arr1[i]>0){
                mp1[arr1[i]]++;
                arr1[i]/=10;
            }
        }

        int ans = 0;
        int len = 0;

        for(int i=0; i<arr2.size(); i++){
        	while(arr2[i]>0){
        		if(mp1.find(arr2[i])!=mp1.end()){
                    string s = to_string(arr2[i]);
                    len = s.length();
        			ans = max(ans,len);
                    break;
        		}
                arr2[i]/=10;
        	}
        }

        return ans;
    }

void solve(){
	vector<int> arr1, arr2;
	for(auto &it:arr1) cin >> it;
	for(auto &it:arr2) cin >> it;
    cout << longestCommonPrefix(arr1, arr2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    init_code();

    solve();
    return 0;
}