#include <bits/stdc++.h>
using namespace std;

void init_code() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif 
}

typedef long long ll;

void solve() {
    string s;
    cin >> s;

    vector<bool> letter_exists(26, false);
    ll q = 0;
     
    for (char c : s) {
        if (c == '?') {
            q++;
        }
        else if(c >= 'A' && c <= 'Z'){
            letter_exists[c - 'A'] = true;
        }
    }

    ll r = count(letter_exists.begin(), letter_exists.end(), true);
    ll total_zeros = 0; 
    ll non_zero_part = 1; 

    
    if (s[0] >= 'A' && s[0] <= 'Z') {
        non_zero_part *= 9; 
        for (ll i = 9, j = 1; j < r; i--, j++) {
            non_zero_part *= i;
        }
    }
    else{
        for (ll i = 10, j = 0; j < r; i--, j++) {
            non_zero_part *= i;
        }
    }


    if (s[0] == '?'){
        non_zero_part *= 9; 
        q--;
    }
    total_zeros += q; 

    
    if(non_zero_part == 1){
        
        cout << "1" + string(total_zeros, '0') << endl;
    }
    else{
        string result = to_string(non_zero_part) + string(total_zeros, '0');
        cout << result << endl;
    }
}

int main() {
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}