#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long ans=0;
    for(long long i=0;i<n;i++)
    {cin>>a[i];
        if (i%2==0)
    {
        ans+=a[i];
    }
        else
        {
            ans-=a[i];
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
