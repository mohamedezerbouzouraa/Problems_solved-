#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    vector<long long> dp(n,0);
map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    { if (mp.count(a[i])==0)
    {
        mp[a[i]]=i;
        if (i>0){dp[i]=dp[i-1]+1;}
    }
        else
        {
            dp[i]=min(dp[mp[a[i]]]+1,dp[i-1]+1);
            mp[a[i]]=i;
        }
 
    }
    cout<<dp[n-1]<<"\n";
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
