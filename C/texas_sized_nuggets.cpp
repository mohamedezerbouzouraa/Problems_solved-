#include <bits/stdc++.h>
#include<iterator>
using namespace std;
 
 
 
void solve()
{
    long long n,m,k;
    cin >> n >> m >> k;
    vector<vector<long long>> a(n,vector<long long>(2));
    long long xmin=LLONG_MAX,xmax=0,ymin=LLONG_MAX,ymax=0;
    long long ydexmin=-1,ydexmax=-1,xdeymin=-1,xdeymax=-1;
    for (long long i = 0; i < n; i++)
    {cin>>a[i][0]>>a[i][1];
        a[i][0]*=k;
        a[i][1]*=k;
        if (a[i][0]>xmax){ xmax=a[i][0];}
        if (a[i][0]<xmin) {xmin=a[i][0];}
        if (a[i][1]>ymax){ ymax=a[i][1];}
         if (a[i][1]<ymin) {ymin=a[i][1];}
 
    }
 
    for (long long i = 0; i < n; i++)
    {
        a[i][0]-=xmin;
        a[i][1]-=ymin;
        if (a[i][0]>m or a[i][1]>m){ cout << -1 << endl;return; }
    }
    for (long long i = 0; i < n; i++)
    {
        cout << a[i][0] << " " << a[i][1] << endl;
    }
 
 
 
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
