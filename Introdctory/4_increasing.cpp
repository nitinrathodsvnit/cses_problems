#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
        int n, ans=0;  cin>>n;
        int prev;    cin>>prev;
        for(int i=1;i<n;i++){
            int t; cin>>t;
            if(prev>t) {
                ans+=(prev-t);
                prev=prev;
            }
            else prev=t;
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