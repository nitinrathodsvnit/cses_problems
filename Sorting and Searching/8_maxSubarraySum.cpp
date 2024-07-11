#include<bits/stdc++.h>
#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n;  cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)  cin>>a[i];
    int curSum=0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        curSum+=a[i];
        maxSum = max(maxSum, curSum);
        if(curSum<0){
            curSum=0;
        }
    }
    cout<<maxSum;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
