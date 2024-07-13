#include<bits/stdc++.h>
#define int            long long int
using namespace std;
const int N = 200005;
// must do

struct linkedlist{
    int val;
    linkedlist *next;

    linkedlist(int x){
        val = x;
        next = NULL;
    }
};

// 3 7
// 3 2 5

// 7*2/3  7*5/3


void solve(){
    int n, k; cin>>n>>k;
    linkedlist *head = new linkedlist(1);
    linkedlist *curr = head;

    for(int i=2; i<=n; i++){
        curr->next = new linkedlist(i);
        curr = curr->next;
    }
    curr->next = head;
    curr = head;
    while(curr->next != curr){
        for(int i=0; i<k-1; i++)  curr = curr->next;
        cout<<curr->next->val<<" ";
        curr->next = curr->next->next;
        curr = curr->next;
    }
    cout<<curr->val<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}

