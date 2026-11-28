//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    long long n;
    cin>>n;
    long long f=n-1;
    vector<long long> a(n+1);
    for(long long i=1;i<=n;i++)
    {cin>>a[i];}
    vector<long long> par(n+1);
    vector<vector<int>> adj(n+1);
    vector<long long> dp(n+1);
    dp=a;
    while(f--)
    {
        long long x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
 
    }
    queue<long long>q;
    q.push(1);
    vector<long long>res(n+1);
    res[1]=a[1];
    par[1]=0;
    while(!q.empty())
    {
        long long h=q.front();
        q.pop();
        for (long long i : adj[h])
        {
            if(i!=par[h])
            {
                par[i]=h;
                res[i]=-res[h]+a[i];
                dp[i]=max(max(max(dp[i],dp[par [h]]-a[h]+a[i]),max(res[i],-dp[h]+a[i])),a[i]-a[h]);
                q.push(i);
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
 
 
 
 
 
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();}
 
}
