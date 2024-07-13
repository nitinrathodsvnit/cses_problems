#include <bits/stdc++.h>
 
using namespace std;
 
#define long long int
 

void solve()
{
    int n, k;  cin>>n>>k;
    vector<vector<int>> A(n, vector<int>(2));
    for(int i=0; i<n; i++){ cin>>A[i][0]; A[i][1] = i; }
    int l, r, arr_size = n, sum = k;
    sort(A.begin(), A.end());
    for (int i = 0; i < arr_size - 2; i++) {
        l = i + 1;
        r = arr_size - 1; 
        while (l < r) {
            if (A[i][0] + A[l][0] + A[r][0] == sum) {
                cout<<A[i][1]+1<<" "<<A[l][1]+1<<" "<<A[r][1]+1<<endl;
                return ;
            }
            else if (A[i][0] + A[l][0] + A[r][0] < sum)
                l++;
            else
                r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return ;
}
signed main()
{
    int t = 1;
    while (t--)
        solve();
}
