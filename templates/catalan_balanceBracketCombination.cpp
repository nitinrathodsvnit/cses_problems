/*
Catalan number Cn= 2nCn/(n+1)

You can refer to this — https://cp-algorithms.com/combinatorics/bracket_sequences.html
https://cp-algorithms.com/combinatorics/catalan-numbers.html

Application in some combinatorial problems
The Catalan number Cn is the solution for
* Number of correct bracket sequence consisting of n opening and n closing brackets.
* The number of rooted full binary trees with n + 1 leaves (vertices are not numbered). A rooted binary tree is full if every vertex has either two children or no children.
* The number of ways to completely parenthesize n + 1 factors.
* The number of triangulations of a convex polygon with n + 2 sides (i.e. the number of partitions of polygon into disjoint triangles by using the diagonals).
* The number of ways to connect the 2n points on a circle to form n disjoint chords.
* The number of non-isomorphic full binary trees with n internal nodes (i.e. nodes having at least one son).
* The number of monotonic lattice paths from point (0, 0) to point (n, n) in a square lattice of size n X n, which do not pass above the main diagonal (i.e. connecting (0, 0) to (n, n)).
* Number of permutations of length n that can be stack sorted (i.e. it can be shown that the rearrangement is stack sorted if and only if there is no such index i < j < k, such that ak < a; < a;).
* The number of non-crossing partitions of a set of n elements.
* The number of ways to cover the ladder 1... n using n rectangles (The ladder consists of n columns, where ith column has a height i).

example:
Your task is to calculate the number of valid bracket sequences of length n. For example, when n=6, there are 5 sequences:
()()()
()(())
(())()
((()))
(()())
*/

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
    cout<<catalan(n)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}