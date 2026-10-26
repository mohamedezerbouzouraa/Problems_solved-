#include <bits/stdc++.h>
using namespace std;
vector<int> depth;
vector<int> parents;
int lcm_tree(int a,int b)
{
 
    if (depth[a]<depth[b])swap(a,b);
    while (depth[b]<depth[a])
    {
        a=parents[a];
    }
    while (a!=b)
    {
        a=parents[a];
        b=parents[b];
    }
    if (a==1)return 0;
    return a;
}
int dist(int x,int y)
{
    return depth[x]+depth[y]-2*depth[lcm_tree(x,y)];
}
 
void solve()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> a(m);
    bool p=true;
    map<long long,long long> mp;
    vector<long long> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
 
    }
    for(int i=1;i<m;i++)
    {if (a[i]!=a[i-1]+1)
    {
        p=false;
        break;
    }}
 
    if (p==true){long long max_a=a[m-1];
        cout<<n-max_a+1<<endl;
        return;}
    cout<<1<<endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
