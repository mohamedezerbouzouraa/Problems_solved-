#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    vector<long long> mji(n);
    vector<long long> maji(n);
    mji[n-1] = a[n-1];
    long long mn=mji[n-1];
    for(long long i=n-2;i>=0;i--)
    {
        if (a[i]<mn)
        {
            mn=a[i];
            mji[i]=mn;
        }
        else
        {
            mji[i]=mji[i+1];
        }
    }
    maji[0]=a[0];
    long long mx=a[0];
    for(long long i=1;i<n;i++)
    { if (a[i]>mx)
    {
        mx=a[i];
        maji[i]=mx;
    }
        else{maji[i]=maji[i-1];}
 
    }
    long long ans=0;
    for(long long i=1;i<n-1;i++)
    {if (a[i]>=maji[i] and a[i]<=mji[i])
    {
        ans++;
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
