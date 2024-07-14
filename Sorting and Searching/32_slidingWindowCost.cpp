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
    int leftSum=0, rightSum=0;
    for (int i = 0; i < k; i++)
    {
        if (i <= k / 2){
            minSet.insert(b[i]);
            leftSum+=b[i];}
        else{
            maxSet.insert(b[i]);
            rightSum+=b[i];}
    }

//  2 3 4 5
    int ans = abs(leftSum - (long long)(*minSet.rbegin())*(long long)minSet.size()) + abs(rightSum - (long long)(maxSet.size())*(long long)(*minSet.rbegin()));
    cout<<ans<<" ";

    for (int i = k; i < n; i++)
    {
        int prev = v[i - k], mnLast = *minSet.rbegin(), mxFirst = *maxSet.rbegin(), cur = v[i];
        if (prev <= mnLast){
            minSet.erase(minSet.find(prev));
            leftSum-=prev;}
        else{
            maxSet.erase(maxSet.find(prev));
            rightSum-=prev;}
        if (cur <= mnLast){
            minSet.insert(cur);
            leftSum+=cur;}
        else{
            maxSet.insert(cur);
            rightSum+=cur;}
        if (maxSet.size() > minSet.size())
        {
            int tm = *maxSet.rbegin();
            rightSum-=tm;
            leftSum+=tm;
            maxSet.erase(maxSet.find(tm));
            minSet.insert(tm);
        }
        else if ((int)(minSet.size() - maxSet.size()) > 1)
        {
            int tm = *minSet.rbegin();
            minSet.erase(minSet.find(tm));
            maxSet.insert(tm);
            leftSum-=tm;
            rightSum+=tm;
        }
        // cout<<"min  ";for(auto it: minSet)  cout<<it<<"  ";
        // cout<<"max  ";for(auto it: maxSet)  cout<<it<<"  ";
        mnLast = *minSet.rbegin();
        // cout << mnLast << " ";
        int mnSize = minSet.size(), mxSize = maxSet.size();
        int ans = abs(leftSum - mnLast*mnSize) + abs(rightSum - (mxSize)*mnLast);
        cout << ans <<" ";
    }
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}