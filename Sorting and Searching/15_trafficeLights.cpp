#include<bits/stdc++.h>
#define int            long long int
using namespace std;
const int N = 200005;
// must do

void solve(){
    int n, x; cin>>n>>x;
    set<pair<int, int>> st;
    st.insert({0, n});
    multiset<int> ms;
    ms.insert(n);
    for(int i=0; i<x; i++){
        int a; cin>>a;
        auto it = st.upper_bound({a, 0});
        it--;
        int start = it->first, end = it->second;
        st.erase(it);
        ms.erase(ms.find(end-start));

        st.insert({start, a});
        st.insert({a, end});
        ms.insert(a-start);
        ms.insert(end-a);
        cout<<*ms.rbegin()<<" ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
