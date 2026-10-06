#include <bits/stdc++.h>
using namespace std;
 
long long f(long long a,long long y)
{
    return a*(y+1)-a*(a+1)/2;
}
void solve()
{
   long long n,k;
    cin>>n>>k;
    long long x=n/k;
    map<long long,long long> mp;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(mp.find(a[i])==mp.end())
        {
            mp[a[i]]=1;
        }
        else{mp[a[i]]++;}
 
    }
    long long ans=0;
    if (n%k!=0){cout<<0<<endl;return;}
    if (x==n){cout<<ans<<endl;return;}
    for (auto it=mp.begin();it!=mp.end();++it)
    {
        if ((it->second)%k!=0)
        {
            cout<<0<<endl;return;
        }
    }
 
    long long l=0,r=1,rp=-1;
    map<long long,long long> mp1;
    bool first=true;
    mp1[a[0]]=1;
    for(l;l<n;l++)
    {
        while (r<min(l+x,n))
        {
            if (mp1.find(a[r])==mp1.end())
            {
                mp1[a[r]]=1;
            }
            else{mp1[a[r]]++;}
            if (k*mp1[a[r]]>mp[a[r]])
            { if (mp1[a[r]]==1){mp1.erase(a[r]);}
                else{mp1[a[r]]--;}
                break;
            }
            r++;
 
 
        }
        ans+=(r-l);
        if (mp1[a[l]]==1){mp1.erase(a[l]);}
        else{mp1[a[l]]--;}
 
    }
    cout<<ans<<endl;
 
 
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
