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
    vector<long long> a(n);
    set<long long> s;
    map<long long, long long> m;
    vector<long long> res(n+1,LLONG_MAX/2);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        res[a[i]]=1;
        m[a[i]]=1;
        s.insert(a[i]);
    }
    for (long long i = 1; i <= n; i++)
    {
        if (res[i]!=LLONG_MAX/2)
        {
            long long coeffi=2;
            while (coeffi*i <= n)
            {
                if (res[coeffi]==LLONG_MAX/2)
                {
 
 
                }
                else
                {
                    res[coeffi*i]=min(res[coeffi*i],res[i]+res[coeffi]);
                }
                coeffi++;
            }
        }
    }
 
    for (long long i = 1; i <= n; i++)
    {
        if (res[i]!=(LLONG_MAX/2))cout << res[i] << " ";
        else{cout <<-1 << " ";}
 
    }
    cout << endl;
 
 
 
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
