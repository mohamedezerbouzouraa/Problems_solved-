#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
void solve()
{
    long long x,y;
    cin >> x >> y;
    if (y>x){cout<<y-x<<endl;}
    else{cout<<0<<endl;}
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
