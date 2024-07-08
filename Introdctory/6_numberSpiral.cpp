#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int x, y; cin>>x>>y;
    int l = max(x, y)-1;
    if(l&1){
        if(x < y)   cout<< l*l + x;
        else        cout<< l*l+2*l-y+2;
    } else {
        if(x < y)   cout<< l*l+2*l-x+2;
        else        cout<< l*l + y;
    }
    cout<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}
