#include<bits/stdc++.h>

using namespace std;

const int N = 200005;

void solve(){
    long long n;
    cin>>n;
    long long start = 0, end = 2e18, ans=0;
    while(start<=end){
        long long mid = (start+end)/2;
        long long sq = sqrt(mid); 
        if((mid - sq) >= n){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    while (t--) solve();
    return 0;
}/**
 * @brief Main function to solve the problem.
 * @details This function reads the number of test cases t from the standard input.
 *          Then, it calls the solve() function t times, and each time, it reads
 *          the necessary input and writes the output to the standard output.
 *          Finally, it returns 0 to indicate successful execution.
 */
