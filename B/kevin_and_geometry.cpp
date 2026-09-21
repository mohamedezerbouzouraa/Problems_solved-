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
    for (long long i = 0; i < n; i++)
    {cin >> a[i];}
    if (n<=3){cout<<-1<<endl;return;}
    sort(a.begin(), a.end());
    vector<long long> b;
    vector<long long> x;
    long long h;
    long long lastocc=-1;
    long long i=0;
    while (i<n-1)
    {if (a[i]==a[i+1] and a[i]!=lastocc)
    {
        b.push_back(a[i]);lastocc=a[i];i+=2;
        h=i;
        while (h<n and a[h]==a[i-1])
        {
            x.push_back(a[h]);h++;
        }
        i=h;

    }
     else{x.push_back(a[i]);i++;}

    }
    if (a[n-1]!=a[n-2]){x.push_back(a[n-1]);}
    if (x.size()==0 or x.size()==1){cout<<b[0]<<" "<<b[0]<<" "<<b[1]<<" "<<b[1]<<endl;return;}
    if (b.size()>1){cout<<b[0]<<" "<<b[0]<<" "<<b[1]<<" "<<b[1]<<endl;return;}
    for (long long t=0;t<b.size();t++)
    {
        long long s=2*b[t];
        for (long long j=0;j<x.size();j++)
        {
            for (long long k=j+1;k<x.size();k++)
            {
                if (s+x[j]>x[k]){cout<<b[t]<<" "<<b[t]<<" "<<x[j]<<" "<<x[k]<<endl;return;}
                else if (s+x[j]<=x[k]){break;}
            }
        }
    }
    cout<<-1<<endl;

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
