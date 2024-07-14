#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long int
 
bool helper(vector<int> v, int mid, int k)
{
    int curSum = 0, cnt=1;
    for (auto it : v){
        if(curSum + it > mid)
        {
            curSum = 0;
            cnt++;
        }
        curSum += it;
        if(k<cnt) return false;
    }
    return  curSum<=mid;
}


void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    int low = mx, high = n * mx;
    
    while (low <= high)
    {
        int mid = (high - low) / 2 + low;
        bool ans = helper(v, mid, k);
 
        if (ans)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << low;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
