#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
void solve()
{
    long long n;
    cin>>n;
    long long ans=0;
    for(long long i=1;i<=n;i++)
    {ans+=((n/i)*(n/i));
 
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
