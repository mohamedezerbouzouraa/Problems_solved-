#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<long long> ev,od;
    for(int i=0;i<n;i++)
    {
        long long v;
        cin>>v;
        if(v%2==0) ev.push_back(v);
        else od.push_back(v);
    }
    int E=ev.size(),O=od.size();
    if(O==0)
    {
        for(int k=1;k<=n;k++) cout<<0<<" ";
        cout<<"\n";
        return;
    }
    sort(ev.begin(),ev.end(),greater<long long>());
    long long mx=*max_element(od.begin(),od.end());
    vector<long long> pref(E+1,0);
    for(int i=0;i<E;i++) pref[i+1]=pref[i]+ev[i];
    for(int k=1;k<=n;k++)
    {
        long long ans;
        if(k-1<=E) ans=mx+pref[k-1];
        else
        {
            int q=k-E;
            if(q%2==1) ans=mx+pref[E];
            else if(E>=1&&q+1<=O) ans=mx+pref[E-1];
            else ans=0;
        }
        cout<<ans<<" ";
    }
    cout<<"\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
}
