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
    vector<long long> b;
    long long mn=LLONG_MAX,indmin=-1;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= mn){ mn = a[i];indmin = i;}


    }
    bool isdone=false,isdone1=false;
    long long best=LLONG_MAX,sglob=-1,kglob=-1;
    for (long long k=1;k<=(n/2);k++)
    {
        if (n%k==0)
        {
            for (long long s=0;s<k;s++)
            {
                long long x=s,t=a[s]+(n/2)*(n);
                while ((x+k)%n!=s)
                {t=t+a[(x+k)%n]-(n/2);
                    x=(x+k)%n;

                }
                if (t<best)
                {
                    sglob=s;
                    kglob=k;
                    best=t;
                }

            }
        }
    }


    if (min(best,mn+(n/2)*n)==best)
    {
        cout<<sglob<<" "<<kglob<<" "<<best<<endl;
    }
    else
    {cout<<indmin<<" "<<n<<" "<<mn+(n/2)*n<<endl;

    }





    }

















int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


        solve();
    }

