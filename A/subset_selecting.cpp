#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> cnt(n+2,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    int stock=0,ans=n+1;
    for(int v=0;v<=n;v++){
        if(cnt[v]==0){ans=v;break;}
        stock+=cnt[v];
        if(stock<k){ans=v;break;}
        stock-=k;
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
