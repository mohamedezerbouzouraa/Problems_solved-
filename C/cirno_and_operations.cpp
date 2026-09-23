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
    long long best=0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        best+=a[i];
    }
    if (n==1){cout<<a[0]<<endl;return;}
    long long x=n;
    vector<long long> b;
    b=a;
    while (x>2)
    {  long long val=0;
        for (long long i = 0; i < x-1; i++)
        {
            b.push_back(b[i+1]-b[i]);
        }
        for (long long i=x;i<2*x-1;i++)
        {
            val+=b[i];
        }
        best=max(best,llabs(val));
        b.erase(b.begin(), b.begin() + x);
        x--;
    }
    cout<<max(max(b[0]+b[1],llabs(b[0]-b[1])),best)<<endl;





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
