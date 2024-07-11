#include<bits/stdc++.h>
#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n, k;   cin>>n>>k;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int tm;   cin>>tm;
        if(mp.find(k - tm) != mp.end()){   cout<<mp[k-tm]<<" "<<i+1<<endl;    return;}
        mp[tm] = i+1;
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
