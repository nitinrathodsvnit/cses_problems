#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long 

void solve()
{
    int n;  cin>>n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int x, y;  cin>>x>>y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    // for(auto it: v) cout<<it.first<<" "<<it.second<<endl;
    int ans=0, time = 0;
    for(int i=0; i<n; i++){
        time += v[i].first;
        ans+=(v[i].second - time);
    }
    cout<<ans<<endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
