#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long  
 

void solve()
{
    int n, k, sum=0, ans=0;  cin>>n>>k;
    map<int, int> mp;
    mp[0]=1;
    for(int i=0; i<n; i++){
        int tm; cin>>tm;
        sum+=tm;
        if(mp.find(sum-k)!=mp.end()){
            ans+=mp[sum-k];
        }
        mp[sum]++;
    }
    cout<<ans<<endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
