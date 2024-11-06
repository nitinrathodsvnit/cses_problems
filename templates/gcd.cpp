#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

/*
int gcd(int a, int b)
{
  if (a == 0) return b;
  return gcd(b % a, a);
}
*/
void solve(){
    int n; cin>>n;
    int a, b; cin>>a>>b;
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    while (t--) solve();
    return 0;
}