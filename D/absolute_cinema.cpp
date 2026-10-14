#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
 
 
int nbBits(long long x)
{
    int c = 0;
    while (x > 0)
    {
        c++;
        x /= 2;
    }
    return c;
}
 
void solve()
{
    long long n;
    cin >> n;
    vector<long long> f(n+1,0);
    for (long long i = 1; i <= n; i++)
    {long long x;
        cin >> x;
        f[i] =x;
    }
    vector<long long> a(n+1,0);
    long long ans = 0,ans2=0;
    for (long long k = 2; k <= n-1; k++)
    {a[k]= (-1)*(2*f[k]-f[k-1]-f[k+1])/2;
ans+=(k-1)*a[k];
        ans2+=(k-2)*a[k];
    }
    a[n]=(f[1]-ans)/(n-1);
    ans2+=(n-2)*a[n];
    a[1]=f[2]-ans2;
    for (long long k = 1; k <= n; k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    }
 
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
