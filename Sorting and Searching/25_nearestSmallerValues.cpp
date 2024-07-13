#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
 

void solve()
{
    int n;  cin>>n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++) cin>>arr[i];
     stack<ll> prevSmaller;
 
    for (int i = 1; i <= n; i++) {
        while (!prevSmaller.empty() && arr[prevSmaller.top()] >= arr[i]) {
            prevSmaller.pop();
        }
        if (prevSmaller.empty()) cout << 0 << " ";
        else cout << prevSmaller.top()<< " ";
        prevSmaller.push(i);
    }
    return ;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
