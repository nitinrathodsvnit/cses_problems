#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long  
 

void solve()
{
    int n, k;  cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    int i=0, j=0, ans=0, cnt=0;
    map<int, int> mp;
    while(j<n){
        mp[v[j]]++;
        if(mp[v[j]]==1) cnt++;
        if(cnt>k){
            while(cnt>k){
                mp[v[i]]--;
                if(mp[v[i]]==0) cnt--;
                i++;
            }
        }
        ans += (j-i+1);
        j++;
    }
    cout<<ans;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
