#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

const int MOD=1000000007; 
int inverse(int i){
    if(i==1) return 1;
    return (MOD - ((MOD/i)*inverse(MOD%i))%MOD+MOD)%MOD;
}


int catalan(int n){
    if(n%2==1) 
    {
        return 0;
    }
    n/=2;
    int fact[2*n+1];
    fact[0]=1;
    for(int i=1;i<=2*n;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
    }
    int ans=(fact[2*n]*inverse(fact[n]))%MOD;
    ans*=(inverse(fact[n])*inverse(n+1))%MOD;
    ans%=MOD;
    return ans;
}

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            count++;
        }
        else{
            count--;
        }
        if(count<0){
            cout<<0<<endl;
            return;
        }
    }
    int cat = n - s.length() - count;
    int pos = catalan(cat);
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}