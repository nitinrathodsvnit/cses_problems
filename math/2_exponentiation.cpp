#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

int pow(int a, int n){
    int ans = 1;
    while(n>0){
        if(n&1) ans = (ans*a)%mod;
        a = (a*a)%mod;
        n >>= 1;
    }
    return ans;
}

void solve(){
    int a, n;   cin>>a>>n;
    cout<<pow(a, n)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    while (t--) solve();
    return 0;
}