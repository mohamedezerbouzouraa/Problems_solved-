//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> adj(n+1);
    while(m--)
    {
        long long x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<long long> clr(n+1,-1);
    long long ans=0;
    for (long long s=1; s<=n; s++)
    {
        if (clr[s]!=-1) continue;
        long long c[2]={0,0};
        bool ok=true;
        queue<long long> q;
        clr[s]=0;
        q.push(s);
        while(!q.empty())
        {
            long long x=q.front();
            q.pop();
            c[clr[x]]++;
            for (long long u:adj[x])
            {
                if (clr[u]==-1)
                {
                    clr[u]=1-clr[x];
                    q.push(u);
                }
                else if (clr[u]==clr[x]) ok=false;
            }
        }
        if (ok) ans+=max(c[0],c[1]);
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) { solve(); }
}
