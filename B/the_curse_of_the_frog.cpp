#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;







void solve()
{long long n,x;
    cin >> n>>x;
    vector<vector<long long>> a(n, vector<long long>(3));
    long long longuestdepin=0;
    long long maxx=0,indm=-1;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        if (a[i][0]*a[i][1] - a[i][2]>0)
        {
            maxx=max(maxx,a[i][0]*a[i][1]-a[i][2] );
            indm=i;
        }
        longuestdepin+=(a[i][0]*((a[i][1]-1)));

    }
    if (maxx==0)
    { if (x<=longuestdepin){cout<<0<<endl;return;}
        cout<<-1<<endl;return;
    }

    long long k=0;
    if (longuestdepin>=x){cout<<0<<endl;return;}
    if ((x-longuestdepin)%maxx==0)
    {
        cout<<(x-longuestdepin)/maxx<<endl;
    }
    else
    {cout<<(x-longuestdepin)/maxx +1<<endl;

    }


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
