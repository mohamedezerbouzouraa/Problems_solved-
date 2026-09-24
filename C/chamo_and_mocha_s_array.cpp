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
    long long maxx=0,maxxx=0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n==1){cout<<a[0]<<endl;return;}
    else if (n==2){cout<<min(a[0],a[1])<<endl;return;}
    long long mx=0;
    for (long long i = 0; i < n; i++)
    {
        if (i==0)
        {
            mx=max(mx,min(a[i],a[i+1]));
        }
        else if (i==n-1)
        {
            mx=max(mx,min(a[i],a[i-1]));
        }
        else
        {
            if (a[i]>=min(a[i-1],a[i+1]) and a[i]<=max(a[i-1],a[i+1]))
            {
                mx=max(mx,a[i]);
            }
            else if (a[i]<min(a[i-1],a[i+1]))
            {
                mx=max(mx,min(a[i+1],a[i-1]));
            }
            else
            {
                mx=max(mx,max(a[i-1],a[i+1]));
            }
        }
    }
    cout << mx << endl;

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
