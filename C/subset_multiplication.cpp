#include <bits/stdc++.h>
using namespace std;
vector<long long> primes;

long long ppcm(long long t1,long long t2)
{
    return t1*(t2/gcd(t1,t2));
}
 
void solve()
{  long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long x=-1;
    for (long long i = 1; i < n; i++)
    {
        if (a[i]%a[i-1] != 0)
        {
                if (x==-1)
                {
                    x=a[i-1]/gcd(a[i],a[i-1]);
                }
                else
                {
                    x=ppcm(x,a[i-1]/gcd(a[i],a[i-1]));
                }
            }
        }
 
    if (x==-1){cout<<20<<endl;return;}
    else
    {
        cout<<x<<"\n";
    }
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
