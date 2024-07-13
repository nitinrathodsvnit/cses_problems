#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long  
 

void solve()
{
    int n, sum=0, ans=0;  cin>>n;
    map<int, int> mp;
    mp[0]=1;
    for(int i=0; i<n; i++){
        int tm; cin>>tm;
        sum+=tm;
        int mod = ((sum%n)+n)%n;
        if(mp.find(mod)!=mp.end()){
            ans+=(mp[mod]);
        }
        mp[mod]++;
    }
    cout<<ans<<endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
