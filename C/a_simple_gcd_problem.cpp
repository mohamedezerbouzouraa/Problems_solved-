#include <bits/stdc++.h>
using namespace std;


void solve()
{
   long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++)cin>>a[i];
    for(long long i=0;i<n;i++)cin>>b[i];
    long long ans=0;
    if (gcd(a[0],a[1])!=a[0])
    {
        ans++;
        a[0]=gcd(a[0],a[1]);
    }
    for(long long i=1;i<n-1;i++)
    {long long y=gcd(a[i],a[i+1]),x=gcd(a[i-1],a[i]);

        if (a[i]!=((x*y)/gcd(x,y)))
        {
            ans++;
            a[i]=(x*y)/gcd(x,y);
        }

    }
    if (a[n-1]!=gcd(a[n-2],a[n-1]))
    {
        ans++;
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
