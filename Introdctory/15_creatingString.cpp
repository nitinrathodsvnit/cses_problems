#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    string s;
    cin>>s;
    set<string> st;
    // without sort it's won't work because of next_permutation function
    // if the function could rearrange 
    // the object as a lexicographically greater permutation.
    // Otherwise, the function returns false to indicate that 
    // the arrangement is not greater than the previous, 
    // but the lowest possible (sorted in ascending order).

    sort(s.begin(), s.end());
    do{
        st.insert(s);
    }while(next_permutation(s.begin(), s.end()));

    cout<<st.size()<<endl;
    for(auto it: st)    cout<<it<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
