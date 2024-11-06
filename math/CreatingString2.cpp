#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

int inverse(int i){
    if(i==1)    return 1;
    return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;
}

int facto[1000005];
void intiFacto(){
    facto[0]=1; facto[1]=1;
    for(int i=2; i<1000005; i++){
        facto[i] = (facto[i-1]*i)%mod;
    }
}

void solve(){
    string s; cin>>s;
    int n = s.length();
    int count[26] = {0};
    for(int i=0; i<n; i++){
        count[s[i]-'a']++;
    }
    int ans = facto[n];
    for(int i=0; i<26; i++){
        if(count[i]) ans = (ans*inverse(facto[count[i]]))%mod;
    }
    cout<<ans<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    intiFacto();
    int t=1; 
    while (t--) solve();
    return 0;
}