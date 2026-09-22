#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;







void solve()
{long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<bool> y(n);
    vector<bool> z(n);
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {if (i<=j)
        {
            if (y[j-i]==false)
            {if (a[i]>=b[j])
            {
                y[j-i]=true;
            }


            }
        }
            else
            {if (y[n-i+j]==false)
            {if (a[i]>=b[j])
            {
                y[n-i+j]=true;
            }

            }

            }

        }
    }
    for (long long j = 0; j< n; j++)
    {
        for (long long k = 0; k < n; k++)
        {
            if (j<=k)
            {if (z[k-j]==false)
            {if (b[j]>=c[k])
            {
                z[k-j]=true;
            }

            }

            }
            else
            {
                if (z[n-j+k]==false)
                {if (b[j]>=c[k])
                {
                    z[n-j+k]=true;
                }

                }

            }
        }
    }
    long long h=0,h2=0;
    for (long long i = 0; i < n; i++)
    {
        if (y[i]==false){h++;}
    }
    for (long long i = 0; i < n; i++)
    {
        if (z[i]==false){h2++;}
    }
    cout << n*h*h2 << endl;

}










int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
