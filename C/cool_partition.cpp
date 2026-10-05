#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    vector<long long> a(n);
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
    map<long long,long long> mp2;
    mp2[a[0]]=1;
    long long  ans=1;
    map<long long,long long> mp3;
    for(long long i=1;i<n;i++)
    {if (mp2.find(a[i])==mp2.end())
    {
        mp3[a[i]]=1;
    }
        else
        {
            mp3[a[i]]++;
            mp2.erase(a[i]);
        }
        if (mp2.size()==0)
        {ans++;
            for (auto it=mp3.begin();it!=mp3.end();it++)
            {
                mp2[it->first]=1;
            }
            mp3.clear();
        }
 
    }
    cout<<ans<<endl;return;
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
