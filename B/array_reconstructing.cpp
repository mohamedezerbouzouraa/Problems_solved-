#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> a(n);
    bool firsttime = true;
    long long x;
    map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]!=-1 and firsttime)
        {mp[a[i]]=i;
            x=a[i];
            firsttime=false;
        }
 
    }
    if (firsttime)
    {
        for (long long i=0;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    long long ans = ((x - mp[x]) % m + m) % m;
    for (long long i=0;i<n;i++)
    {
        cout<<(ans+i)%m<<" ";
    }
    cout<<endl;
 
 
 
 
}
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
}
