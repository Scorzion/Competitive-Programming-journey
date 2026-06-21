#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl "\n"

bool isPalindrome(const string& s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) if (s[l++] != s[r--]) return false;
    return true;
}

string largestPalindromeLEQ(string s) {
    if (s.size() == 1) return s;

    int len = s.size();
    if (isPalindrome(s)) return s;

    string candidate = s;
    for (int j = 0; j < len / 2; j++)
        candidate[len - 1 - j] = candidate[j];

    if (candidate <= s) return candidate;

    int idx = (len % 2 == 1) ? len / 2 : len / 2 - 1;
    int borrow = 1;

    while (idx >= 0 && borrow) {
        int d = (candidate[idx] - '0') - borrow;
        if (d < 0) { d += 10; borrow = 1; }
        else borrow = 0;
        candidate[idx] = '0' + d;
        idx--;
    }

    // Underflow: leading zero means length shrinks → all 9s of (len-1) digits
    // e.g. n="1000" → candidate becomes "0990" → return "999"
    if (candidate[0] == '0') return string(len - 1, '9');

    // Re-mirror left half onto right half
    for (int j = 0; j < len / 2; j++)
        candidate[len - 1 - j] = candidate[j];

    return candidate;
}

void solve(){
    ll n;
    cin >> n;

    ll i = 0;
    while(n-12LL*i>=0){
        ll y = n-12LL*i;
        if(isPalindrome(y)){
            cout << y << " " << 12LL*i << endl;
            return;
        }
        i++;
    }

    cout << -1 << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
