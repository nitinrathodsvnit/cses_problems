#include <bits/stdc++.h>
 
using namespace std;
//  stander problem please read this
#define long long int
 

void solve()
{
    int n;  cin>>n;
    vector<int> v(n);
    int sum=0, mx=0;
    for(int i=0; i<n; i++){ 
        cin>>v[i]; 
        sum+=v[i]; 
        mx = max(mx, v[i]); 
    }
    cout<<max(mx*2, sum)<<endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
