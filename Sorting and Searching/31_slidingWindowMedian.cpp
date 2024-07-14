#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> b(v.begin(), v.begin() + k);
    sort(b.begin(), b.end());
    multiset<int> minSet;
    multiset<int, greater<int>> maxSet;
    for (int i = 0; i < k; i++)
    {
        if (i <= k / 2)
            minSet.insert(b[i]);
        else
            maxSet.insert(b[i]);
    }
//  2 3 4 5
    if (k & 1)
        cout << b[k / 2] << " ";
    else
        cout << b[k / 2 - 1] << " ";
    for (int i = k; i < n; i++)
    {
        int prev = v[i - k], mnLast = *minSet.rbegin(), mxFirst = *maxSet.rbegin(), cur = v[i];
        if (prev <= mnLast)
            minSet.erase(minSet.find(prev));
        else
            maxSet.erase(maxSet.find(prev));
        if (cur <= mnLast)
            minSet.insert(cur);
        else
            maxSet.insert(cur);
        if (maxSet.size() > minSet.size())
        {
            int tm = *maxSet.rbegin();
            maxSet.erase(maxSet.find(tm));
            minSet.insert(tm);
        }
        else if ((int)(minSet.size() - maxSet.size()) > 1)
        {
            int tm = *minSet.rbegin();
            minSet.erase(minSet.find(tm));
            maxSet.insert(tm);
        }
        // cout<<"min  ";for(auto it: minSet)  cout<<it<<"  ";
        // cout<<"max  ";for(auto it: maxSet)  cout<<it<<"  ";
        cout << *minSet.rbegin() << " ";
    }
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}