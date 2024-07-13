#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long  
 

void solve()
{
    int n, k;  cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int ans=0, i=0, j=0, curSum=a[0];
    while(j<n){
        if(curSum==k){
            ans++;
            j++;
            if(j<n) curSum+=a[j];
        }else if(curSum>k){
            curSum-=a[i];
            i++;
        }else{
            j++;
            if(j<n) curSum+=a[j];
        } 
    }
    cout<<ans<<endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
