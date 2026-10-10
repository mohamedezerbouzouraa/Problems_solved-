#include <bits/stdc++.h>
using namespace std;


void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++)
    {long long x,y;
        cin>>x>>y;
        a[i]=x;
        b[i]=y;


        }
    vector<double> f(n);
    for(long long i=n-1;i>=0;i--)
    {if (i==n-1)
    {
        f[n-1]=a[i];
    }
        else
        {
            long long x=a[i];
            double coeff = 1.0 - b[i] / 100.0;
            if (f[i+1]*coeff+a[i]>f[i+1])
            {
                f[i]=f[i+1]*coeff+a[i];
            }
            else
            {
                f[i]=f[i+1];
            }
        }

    }
    cout << fixed << setprecision(10) << f[0] << "\n";

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
