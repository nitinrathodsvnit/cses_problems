#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
        int n, ans=1; cin>>n;
        for(int i=2;i<=n;i++){
            int t; cin>>t;
            ans^=i;
            ans^=t;
        }
        cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}