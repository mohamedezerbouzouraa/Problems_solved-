#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    long long sum = a[0],sum2=a[0],alfa=a[0];
    for(long long i=1;i<n;i++)
    {
        long long v = a[i];
        long long y = v + max(sum, -sum2);
        alfa = max(alfa, y);
 
        long long newMax = max({v,v+sum, v+2*sum});
        long long newMin = min({v,v+sum2,v+2*sum2});
        sum  = newMax;
        sum2 = newMin;
    }
    cout << alfa << endl;
 
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
