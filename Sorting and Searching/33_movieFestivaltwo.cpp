#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i].first;
        cin >> p[i].second;
    }

    sort(p.begin(), p.end());

    ll pr = 0, ans = 0;
    multiset<ll> s;

    for (ll i = 0; i < k; i++)
        s.insert(p[i].second);

    for (ll i = k; i < n; i++)
    {
        if (p[i].first >= *s.begin())
        {
            s.erase(s.begin());
            s.insert(p[i].second);
            ans++;
        }
        else if (p[i].second < *s.rbegin())
        {
            s.erase(s.find(*s.rbegin()));
            s.insert(p[i].second);
        }
    }
    cout << ans + s.size() << endl;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}