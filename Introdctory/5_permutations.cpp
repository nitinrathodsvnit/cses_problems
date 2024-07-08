#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<"1";
        return;
    }
    if(n<4){
        cout<<"NO SOLUTION\n";
        return;    
    }
    for(int i=2; i<=n; i+=2)    cout<<i<<" ";
    for(int i=1; i<=n; i+=2)    cout<<i<<" ";
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
