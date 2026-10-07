#include <bits/stdc++.h>
using namespace std;
 
long long f(long long a,long long y)
{
    return a*(y+1)-a*(a+1)/2;
}
void solve()
{
    long long n;
    cin>>n;
    long long ans =0;
    map<long long, array<vector<long long>, 2>> mp;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    for(long long i=0;i<n-4;i++)
    { long long k=a[i]+a[i+2]-a[i+4];
        if (mp.find(k)==mp.end())
        { if (i%2==0)
        {
            mp[k][0].push_back(i);
        }
        else{
            mp[k][1].push_back(i);
        }
        }
        else
        {
            if (i%2==0)
            {
                mp[k][0].push_back(i);
            }
            else{
                mp[k][1].push_back(i);
            }
        }
 
    }
    for (auto it=mp.begin();it!=mp.end();it++)
    { ans+=it->second[0].size()*it->second[1].size();
        long long r=1;
        for (long long i=0;i<it->second[0].size();i++)
        {if (r < i + 1) r=i+1;
            while (r<it->second[0].size())
            {
                if (it->second[0][r]-it->second[0][i]==2 or it->second[0][r]-it->second[0][i]==4)
                {
                    r++;
                }
                else{break;}
            }
            ans+=(it->second[0].size()-r);
 
        }
        r=1;
        for (long long i=0;i<it->second[1].size();i++)
        {  if (r < i + 1) r=i+1;
            while (r<it->second[1].size())
            {
                if (it->second[1][r]-it->second[1][i]==2 or it->second[1][r]-it->second[1][i]==4)
                {
                    r++;
                }
                else{break;}
            }
            ans+=(it->second[1].size()-r);
 
        }
 
 
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
