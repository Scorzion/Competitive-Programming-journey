/**
    Author: Sourav Sharma (@Sneaky_Typer)
    Go for Gold.
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
    int sz = 26;
    string s;
    cin >> s;

    int m = 0;
    int n = s.size();
    vector<bool> prev(sz, false);
    for(auto &i : s){
        if(prev[i-'a']){
            m += 2;
            for(int j=0; j<sz; j++){
                prev[j]=false;
            }
        }
        else{
            prev[i-'a']=true;
        }
    }

    cout << n - m << endl;
    return;
}

void main_(){
    init_code();
 
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}

static void run_with_stack_size(void (*func)(void), size_t stsize) {
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%rsp, (%0)\n"
        "mov %0, %%rsp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%rsp\n" : : "r"(send));
    free(stack);
}

int main(){
    // to run with 1 GiB stack
    run_with_stack_size(main_, 1024 * 1024 * 1024); 
    return 0;
}
