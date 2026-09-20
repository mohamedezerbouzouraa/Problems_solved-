#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long min=LLONG_MAX;
    for (long long i = 0; i < n; i++)
    {cin >> a[i];
        if (a[i] < min){min=a[i];}
    }
    if (n==2 and a[0]!=a[1]){cout<<"NO"<<endl;return;}
    sort(a.begin(), a.end());
    if (a[1]==min){cout<<"YES"<<endl;return;}
    vector<long long> b;
    long long t=0,x;
    for (long long i = 1; i < n; i++)
    {
        if (a[i]%min==0)
        {
            b.push_back(a[i]);
            t++;


            if (t==2)
            {x=gcd(b[0],b[1]);}
            else if (t>2)
            {x=gcd(x,b[t-1]);}
            if (x==min){cout<<"YES"<<endl;return;}
        }
    }

    cout<<"NO"<<endl;
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
