#include <bits/stdc++.h>
 
using namespace std;
 
#define int unsigned long long int
 
bool helper(vector<int> &v, int mid, int k)
{
    int item = 0;
    for (auto it : v)
    {
        item += (mid / it);
        if (item >= k)
            return true;
    }
    return false;
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
    int low = (mn*k)/n, high = k * mx;
    if((k*mn)%n) high+=n;
    high/=n;
    // cout<<high<<"   ";
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
