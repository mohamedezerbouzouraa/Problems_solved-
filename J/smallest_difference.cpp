#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    vector<long long> a(n);
    long long x=0;
    map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (mp.find(a[i])==mp.end())
        {
            mp[a[i]]=1;
        }
        else{mp[a[i]]++;}
 
    }
    long long mx=0;
    for (auto it=mp.begin();it!=mp.end();it++)
    { auto nx=next(it);
        if (nx != mp.end())
        {
            if (nx->first - it->first ==1)
            {
                mx = max(mx,it->second + nx->second);
            }
            else{mx=max(mx,it->second);}
        }
        else{mx = max(mx,it->second);}
 
    }
    cout<<mx<<endl;
 
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
