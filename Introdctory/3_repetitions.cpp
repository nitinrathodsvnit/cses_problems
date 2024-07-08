#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
        string s;   cin>>s;
        int ans=1, tm=1;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]) tm++;
            else tm=1;
            ans=max(ans, tm);
        }
        cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}