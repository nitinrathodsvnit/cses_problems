/*
This is a standard problem of finding derangements in a sequence.
The recursive formula is D(n)=(D(n−1)+D(n−2))(n−1)
.
For info regarding derangement, see https://en.wikipedia.org/wiki/Derangement.

a derangement is a permutation of the elements of a set in which no element appears in its original position.

example:
There are n children at a Christmas party, and each of them has brought a gift. The idea is that everybody will get a gift brought by someone else.
In how many ways can the gifts be distributed?

*/

#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 1000005, mod = 1e9 + 7;

int derangementArray[N];

int derangement(int n){
    derangementArray[1] = 0;
    derangementArray[2] = 1;
    for(int i=3; i<=n; i++){
        derangementArray[i] = ((derangementArray[i-1]+derangementArray[i-2])%mod*(i-1))%mod;
    }
    return derangementArray[n];
}

void solve(){
    int n; cin>>n;
    cout<<derangement(n)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}