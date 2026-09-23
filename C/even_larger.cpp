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
    vector<long long> sumev(n,0);
    vector<long long> sumod(n,0);
    for (long long i = 0; i < n; i++)
    { cin >> a[i];
        
    }
    long long i=0,s=0;
    while (i<n-1)
    {
        if ((i+1)%2==1)
        {
            if (a[i]>a[i+1])
            {
                s+=(a[i]-a[i+1]);
                a[i]=a[i+1];
            }

            }
        else{if (a[i]<a[i+1])
        {s+=(a[i+1]-a[i]);
            a[i+1]=a[i];
        }

        }
        i++;
    }
    i=0;
    while (i<n-2)
    {
        if ((i+1)%2==1)
        {
            if (a[i]+a[i+2]>a[i+1])
            {
                s+=(a[i+2]-(a[i+1]-a[i]));
                a[i+2]=a[i+1]-a[i];
            }
            i+=2;
        }
        else{i++;}
    }
    cout << s<<endl;
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
