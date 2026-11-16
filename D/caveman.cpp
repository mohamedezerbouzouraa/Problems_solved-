// الحمد لله على توفيقه
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long ask(long long a,long long b)
{
   cout<<"? "<<a<<" "<<b<< endl;
    long long r;
    cin>>r; return r;
}
 
void solve() {
    long long n,m;
    cin >> n >> m;
    vector<vector<long long>> adj(n+1);
    set<long long> vis;
    long long m_initial=m;
    int maxv=0;
    while (m--)
    {long long x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        vis.insert(x);
        vis.insert(y);
        maxv=max(maxv,max((int)adj[x].size(),(int)adj[y].size()));
    }
    if (!(vis.size()==n)){cout<<"Brain Melt"<<endl;return;}
    if (n>3)
    {
        if (maxv!=n-1 or m_initial!=n-1){cout<<"Many"<<endl;return;}
        else cout<<2<<endl;
        return;
    }
    if (adj[3].size()==2 and adj[2].size()==2)
    {
        cout<<"Many"<<endl;return;
    }
    cout<<2<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
